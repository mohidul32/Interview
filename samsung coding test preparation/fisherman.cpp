// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/fisherman/problem
#include<iostream>
using namespace std;
int g1, g2, g3, n, ans = 1e9, tot = 0, x, y, z;
void dfs(int i, int sum, int c1, int c2, int c3) {
	if (i == n + 1) {
		if (c1 == x && c2 == y && c3 == z) {
			ans = min(ans, sum);
		}
		return;
	}
	if (c1 < x) {
		dfs(i + 1, sum + abs(i - g1)+1, c1 + 1, c2, c3);
	}
	if (c2 < y) {
		dfs(i + 1, sum + abs(i - g2)+1, c1, c2 + 1, c3);
	}
	if (c3 < z) {
		dfs(i + 1, sum + abs(i - g3)+1, c1, c2, c3 + 1);
	}
	dfs(i + 1, sum, c1, c2, c3);

}
int main() {
	int i, j;
	cin >> n;
	cin >> g1 >> g2 >> g3;
	cin >> x >> y >> z;
	tot = x + y + z;
	dfs(1, 0, 0, 0, 0);
	cout << ans << endl;
}