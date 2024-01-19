// https://www.careercup.com/question?id=5707238197952512
#include<iostream>
#include<math.h>
#include<queue>
#include<algorithm>
using namespace std;
int n, m;
int a[402][6];
int dp[23][23];
int vis[24][24];
int vis1[402][6];
int fun(int  x, int y) {
	return (x - 1) * m + y;
}
void bfs(int x1, int y1, int index) {
	queue<pair<int, int>>q;
	q.push({x1, y1});
	vis[x1][y1] = 1;
	while (q.size()) {
		pair<int, int>p;
		p = q.front();
		q.pop();
		int x = p.first, y = p.second;
		int in = fun(x, y);
		vis1[in][index] = 1;
		if (x + 1 <= n && dp[x + 1][y] == 1 && vis[x + 1][y] == 0) {
			a[fun(x + 1, y)][index] = a[in][index] + 1;
			vis[x + 1][y] = 1;
			q.push({x + 1, y});
		}
		if (y + 1 <= m && dp[x][y + 1] == 1 && vis[x][y + 1] == 0) {
			a[fun(x, y + 1)][index] = a[in][index] + 1;
			vis[x][y + 1] = 1;
			q.push({x, y + 1});
		}
		if (x - 1 >= 1 && dp[x - 1][y] == 1 && vis[x - 1][y] == 0) {
			a[fun(x - 1, y)][index] = a[in][index] + 1;
			vis[x - 1][y] = 1;
			q.push({x - 1, y});
		}
		if (y - 1 >= 1 && dp[x][y - 1] == 1 && vis[x][y - 1] == 0) {
			a[fun(x, y - 1)][index] = a[in][index] + 1;
			vis[x][y - 1] = 1;
			q.push({x, y - 1});
		}
	}

}

void clearr() {
	int i, j;
	for (i = 0; i <= 400; i++) {
		for (j = 0; j <= 6; j++) {
			a[i][j] = 0;
			vis1[i][j] = 0;
		}
	}
	for (i = 0; i <= 22; i++) {
		for (j = 0; j <= 22; j++) {
			vis[i][j] = 0;
			dp[i][j] = 0;
		}
	}
}
int main() {
	int test,fac=1;
	cin >> test;

	while (test--) {
		clearr();
		int i, j, x, y;
		cin >> n >> m;
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) cin >> dp[i][j];
		}
		int q, index = 1, k;
		cin >> k;
		q = k;
		while (q--) {
			cin >> x >> y;
			x++; y++;
			if (dp[x][y] == 0) continue;
			for (i = 0; i <= n; i++) {
				for (j = 0; j <= m; j++) vis[i][j] = 0;
			}
			vis[x][y] = 1;
			bfs(x, y, index);
			index++;
		}
		int f = 0, mn = 1e9;
		for (i = 1; i <= n * m; i++) {
			cout << i << "--->" << endl;
			int ck = 1, mx = 0;
			for (j = 1; j <= k; j++) {
				cout << vis1[i][j] << " ";
				if (vis1[i][j] == 0) ck = 0;
				mx = max(mx, a[i][j]);
			}
			cout << endl;
			if (ck) mn = min(mn, mx);
		}
		if (mn == 1e9) mn = -1;
		 cout<<"#"<<fac++<<" ";
		cout << mn << endl;
	}
}

/*  test case
2
3 3
1 1 1
1 1 1
1 1 1
4
0 0
2 0
2 2
0 2
3 3
1 0 1
0 1 1
1 1 1
4
0 0
2 0
2 2
0 2
*/