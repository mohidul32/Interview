// https://www.careercup.com/question?id=5661535477694464
#include<iostream>
#include<vector>
using namespace std;
const int N = (int) 1e5 + 3;
int n, parent[N + 3];
vector<int>g[N + 3];
dfs(int node, int p) {
	for (int x : g[node]) {
		if (x == p) continue;
		parent[x] = node;
		dfs(x, node);
	}
}
int lca(int x, int y) {
	cout<<x<<" "<<y<<endl;
	vector<int>dp(n + 3, 0);
	while (x != 0) {
		dp[x] = 1;
		x = parent[x];
	}
	while (y != 0) {
		if (dp[y]) return y;
		y=parent[y];
	}

}

int main() {
	int  i, j, x, y;
	cin >> n;
	for (i = 1; i < n; i++) {
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	int q;
	dfs(1, 0);
	cin >> q;
	vector<int>ans(n + 3, 0);
	while (q--) {
		cin >> x >> y;
		int lc = lca(x, y);
		while (x != lc) {
			ans[x]++;
			x = parent[x];
		}
		while (y != lc) {
			ans[y]++;
			y = parent[y];
		}
		ans[lc]++;
	}
	int mx = 0, node = 1;
	for (i = 1; i <= n; i++) {
		if (mx < ans[i]) {
			mx = ans[i];
			node = i;
		}
	}
	cout << node << endl;
}

/*
test case
8
1 2
1 3
1 8
2 4
2 5
3 6
3 7
4
4 3
6 8
7 8
5 1
*/