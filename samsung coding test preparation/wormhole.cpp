//https://www.codingninjas.com/studio/problems/minimum-time-in-wormhole-network_630527?leftPanelTabValue=PROBLEM
// https://www.careercup.com/question?id=5677905146281984
// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/warmholes/problem
#include<iostream>
using namespace std;
int xx1[2055], yy1[205], xx2[205], yy2[205], w[205];
int n, x2, y2, x1, Y1, vis[205], ans = 0;
int a[205];
void fun() {
  int i, j ;
  for (i = 1; i < (1 << n); i++) {
    int in = 0;
    int v[n + 1];
    for (j = 0; j < n; j++) {
      if ((i >> j) & 1) v[in++] = a[j];
    }
    int prev_x = x1, prev_y = Y1;
    int res = 0;
    for (int l = 0; l < in; l++) {
      j = v[l];
      int x = abs(prev_x - xx1[j]) + abs(prev_y - yy1[j]);
      int y = abs(prev_x - xx2[j]) + abs(prev_y - yy2[j]);
      res += w[j];
      if (x <= y) {
        res += x;
        prev_x = xx2[j];
        prev_y = yy2[j];
      } else {
        res += y;
        prev_x = xx1[j];
        prev_y = yy1[j];
      }
    }
    res += abs(x2 - prev_x) + abs(y2 - prev_y);
    ans = min(ans, res);
  }
  return;
}
void dfs(int index) {
  if (index == n) {
    fun();
    return;
  }
  for (int i = 0; i < n; i++) {
    if (vis[i] == 0) {
      a[index] = i;
      vis[i] = 1;
      dfs(index + 1);
      vis[i] = 0;
    }
  }
  return ;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int i, j;
    for(i=0;i<=201;i++) vis[i]=0;
    cin >> n;
    cin >> x1 >> Y1 >> x2 >> y2;
    ans = abs(x1 - x2) + abs(Y1 - y2);
    for (i = 0; i < n; i++) cin >> xx1[i] >> yy1[i] >> xx2[i] >> yy2[i] >> w[i];
    dfs(0);
    cout << ans << endl;
  }
  return 0;
}
