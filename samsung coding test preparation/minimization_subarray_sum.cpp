// https://www.careercup.com/question?id=5730470801702912
#include<iostream>
#include<vector>
using namespace std;
vector<int>v;
int a[200005], k, n, ans = 1e9;
vector<vector<int>>vt;
void dfs(vector<int>v, int sum, int c) {
	if (sum > n) return;
	if (sum == n && c == k) {
		for (int i = 1; i <= n; i++) {
			int j = i;
			int mn = 1e9, mx = 0;
			for (int x : v) {
				sum = 0;

				int t = x;
				while (t--) {
					sum += a[j];
					j++;
				}
				mx = max(mx, sum);
				mn = min(mn, sum);
			}
			ans = min(ans, (mx - mn));
		}
		return;
	}
	for (int i = 1; i <= n - k + 1; i++) {
		vector<int>tem = v;
		tem.push_back(i);
		dfs(tem, sum + i, c + 1);
	}
}
int main() {
	int i, j, x, y;
	cin >> n >> k;
	for (i = 1; i <= n; i++) cin >> a[i];
	for (i = n + 1; i <= 2 * n; i++) a[i] = a[i - n];
	vector<int>v;
	dfs(v, 0, 0);
	cout << ans << endl;
}