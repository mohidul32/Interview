//https://www.careercup.com/question?id=5762787884662784
//https://github.com/s-kachroo/SamsungPractice/blob/master/doctor%20probability.cpp
#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;
typedef pair<int, int> pi;
typedef vector<int> vi;
int vis[100];
double pr[100], ans = 0.00;
vector<pair<int, double>>g[100];
int node = 1;
int tm, n, m;
void bfs() {
	queue<int>q;
	q.push(1);
	vis[1] = 1;
	int t = 0;
	pr[1] = 1.00;
	while (!q.empty()) {
		int sz = q.size();
		node = 1; ans = 0.0;
		while (sz--) {
			int x = q.front(); q.pop();
			for (pair<int, double> p : g[x]) {
				double w = p.second;
				int y = p.first;
				if (x == y) continue;
				pr[y] += (pr[x] * w);
				if (ans < pr[y]) {
					ans = pr[y];
					node = y;
				}
				if (vis[y] == 0) {
					vis[y] = 1;
					q.push(y);
				}
			}
		}
		t += 10;
		if (t >= tm) break;
	}
	cout << node << " " << ans << endl;
}
void clearr() {
	for (int i = 0; i <= 20; i++) {
		vis[i] = 0;
		pr[i] = 0.00;
		g[i].clear();
		ans = 0.00;
	}
}
int main() {
	int t, fac = 1;
	cin >> t;
	while (t--) {
		clearr();
		int i, j, x, y;
		double w;
		cin >> n >> m >> tm;
		pi p;
		for (i = 1; i <= m; i++) {
			cin >> x >> y >> w;
			g[x].push_back({y, w});
		}
		cout << "#" << fac++ << " ";
		bfs();
	}
}
/* test case
2
6 10 40
1 2 0.3
1 3 0.7
3 3 0.2
3 4 0.8
2 4 1
4 5 0.9
4 4 0.1
5 6 1.0
6 3 0.5
6 6 0.5

6 10 10
1 2 0.3
1 3 0.7
3 3 0.2
3 4 0.8
2 4 1
4 5 0.9
4 4 0.1
5 6 1.0
6 3 0.5
6 6 0.5
*/