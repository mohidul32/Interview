//https://www.careercup.com/question?id=5695230699896832
//https://blog.csdn.net/weixin_42688573/article/details/124970239
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
typedef vector<int> vi;
int ans = 1e9, n;
int a[20], vis[20], c = 0;
vector<vi>g[10];
int ar[20];
void dfs(int i, vi v, int n1) {
	if (v.size() == n1) {
		g[n1].push_back(v);
		return;
	}
	for (i = 1; i <= n1; i++) {
		if (vis[i] == 0) {
			vi tem = v;
			vis[i] = 1;
			tem.push_back(i);
			dfs(i + 1, tem, n1);
			vis[i] = 0;
		}
	}
}

void cal(int i, int prev, int rem, int tp, int res) {
	if (i == n + 1) {
		ans = min(ans, res);
		return;
	}
	if (rem == 0) {
		return;
	}
	if (a[ar[i]] == 1) {
		if (tp == 1) return;
		int sum = res + abs(prev - ar[i]);
		rem--;
		cal(i + 1, ar[i], rem, 0, sum);
		cal(i + 1, 0, 2, 0, sum + ar[i]);
		cal(i + 1, n + 1, 2, 1, sum + (n + 1 - ar[i]));
	} else {
		if (tp == 0) return;
		int sum = res + abs(prev - ar[i]);
		rem--;
		cal(i + 1, ar[i], rem, 1, sum);
		cal(i + 1, 0, 2, 0, sum + ar[i]);
		cal(i + 1, n + 1, 2, 1, sum + (n + 1 - ar[i]));
	}
}
int main() {
	int test,fac=1;
	cin >> test;
	for (int tt = 2; tt <= 8; tt++) {
		vi vt;
		dfs(1, vt, tt);
	}
	while (test--) {
		ans=1e9;
		int i, j, x, y;
		cin >> n;
		for (i = 1; i <= n; i++) cin >> a[i];
		vector<vi>vv;
		for (auto vv : g[n]) {
			int i = 1;
			for (int x : vv) {
				ar[i] = x;
				i++;
			}
			cal(1, 0, 2, 0, 0);
			cal(1, n+1, 2, 1,n+1 );
		}
		cout <<"# "<<fac++<<" "<< ans << endl;
	}
}

/*test case
5
3
2 1 2
5
1 2 1 2 1
5
2 1 1 2 1
8
2 2 1 1 1 2 1 1
8
2 2 2 2 2 2 2 2
*/