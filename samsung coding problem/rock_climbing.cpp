//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/rock-climbing/submissions/code/1371749650
#include<iostream>
#include<queue>
using namespace std;
typedef pair<int, int> pi;
int n, m;
int a[15][15], vis[15][15], dp[15][15], ans = 1e9;
void dfs(int x, int y, int c) {
	//cout << x << " " << y << " " << c << endl;
	if (a[x][y] == 3) {
		ans = min(ans, c);
		return;
	}
	if (y + 1 <= m && vis[x][y + 1] == 0 && a[x][y + 1]!=0) {
		vis[x][y + 1] = 1;
		dfs(x, y + 1, c );
		vis[x][y + 1] = 0;
	}
	if (y - 1 >= 1 && vis[x][y - 1] == 0 && a[x][y - 1]!=0) {
		vis[x][y - 1] = 1;
		dfs(x, y - 1, c);
		vis[x][y - 1] = 0;
	}
	int cnt = 1, x1 = x - 1;
	while (x1 >= 1 && a[x1][y] == 0) {
		x1--;
		cnt++;
	}
	if (x1 >= 1 && vis[x1][y] == 0) {
		vis[x1][y] = 1;
		dfs(x1, y, max(cnt, c));
		vis[x1][y] = 0;
	}
	cnt = 1; x1 = x + 1;
	while (x1 <= n && a[x1][y] == 0) {
		x1++;
		cnt++;
	}
	if (x1 <= n && vis[x1][y] == 0) {
		vis[x1][y] = 1;
		dfs(x1, y, max(cnt, c));
		vis[x1][y] = 0;
	}
}
int main() {
	int i, j, x, y;
	cin >> n >> m;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) cin >> a[i][j];
	}
	vis[n][1] = 1;
	dfs(n, 1, 0);
	cout << ans << endl;
}