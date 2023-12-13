//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/burst-balloons-1/problem
#include<iostream>
using namespace std;
int vis[14], a[15], in[15], n, vis1[14], ans = 0;
void fun() {
	int i, j, x, y, l, r, res = 0;
	for (i = 1; i < n; i++) {
		x = in[i];
		if (vis1[x]) continue;
		l = x - 1; r = x + 1;
		while (vis1[l]) l--;
		while (vis1[r]) r++;
		vis1[x] = 1;
		res += ( a[l] * a[r]);
	}
	res+=a[in[n]];
	ans = max(ans, res);
}
void dfs(int index) {
	if (index == n + 1) {
		for (int i = 1; i <= 13; i++) vis1[i] = 0;
		fun();
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (vis[i] == 0) {
			in[index] = i;
			vis[i] = 1;
			dfs(index + 1);
			vis[i] = 0;
		}
	}
}
int main() {
	int i, j, x, y;
	cin >> n;
	a[0] = 1; a[n + 1] = 1;
	for (i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dfs(1);
	cout << ans << endl;

}