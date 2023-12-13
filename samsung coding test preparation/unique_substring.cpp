#include<iostream>
#include<vector>
using namespace std;
int main() {
	int t,fac=1;
	cin >> t;
	while (t--) {
		int n, i, j, x, y, ans = 0;
		string s;
		cin >> s;
		n=s.size();
		int mx = 0;
		vector<string>vt;
		int len;
		vector<int>dp(n + 3, 0);
		for (i = 0; i < n; i++) {
			string st = "";
			for (j = i; j < n; j++) {
				st += s[j];
				int f = 1;
				for (string ss : vt) {
					if (st == ss) {
						f = 0; break;
					}
				}
				if (f) {
					vt.push_back(st);
					dp[st.size()]++;
					if(mx<dp[st.size()]){
						mx=dp[st.size()];
						len=st.size();
					}
				}
			}
		}
		cout <<"#"<<fac++<<" "<<len<<" "<< mx << endl;

	}
}