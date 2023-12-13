// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/travelling-salesman-4/problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int, int> pi;
int dis[20][20], vis[20];
int n, sz, ans = 1e9;
void dfs(int node, int sum, int c) {
	if (c >= n) return;
	for (int i = 1; i <= n; i++) {
		if (i == node) continue;
		if (i == 1 && c == n - 1) {
			ans = min(ans, sum + dis[node][i]);
			continue;
		}
		if (vis[i] == 0) {
			vis[i] = 1;
			dfs(i, sum + dis[node][i], c + 1);
			vis[i] = 0;
		}
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int i, j, x, y;
		cin >> n;
		ans=1e9;
		for(i=1;i<=n;i++) vis[i]=0;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) cin >> dis[i][j];
		}
		vis[1] = 1;
		dfs(1, 0, 0);
		cout << ans << endl;
	}
}