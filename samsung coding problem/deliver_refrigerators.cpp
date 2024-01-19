//https://www.careercup.com/question?id=5745468609921024
//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/kim-and-refrigerators
#include<iostream>
#include<vector>

using namespace std;
typedef vector<int> vi;
int n, ans = 1e9, x[25], y[25], x1, y1, x2, y2, vis[203];
int v[27];
int fun(int a1, int b1, int a2, int b2) {
  int d = abs(a1 - a2) + abs(b1 - b2);
  return d;
}
void dfs(int index) {
  if (index==n) {
    int res = fun(x1, y1, x[v[0]], y[v[0]]);
    for (int i = 1; i < n; i++) {
      res += fun(x[v[i - 1]], y[v[i - 1]], x[v[i]], y[v[i]]);
    }
    res += fun(x2, y2, x[v[n - 1]], y[v[n - 1]]);
    ans = min(res, ans);
    return;
  }
  for (int i = 1; i <= n; i++) {
    if (vis[i] == 0) {
      v[index]=i;
      vis[i] = 1;
      dfs(index+1);
      vis[i] = 0;
    }
  }
}
int main() {
  int test = 10, fact = 1;
  //cin >> test;
  while (test--) {
    ans = 1e9;
    int i, j;
    scanf("%d", &n);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    for (i = 1; i <= n; i++) {
      scanf("%d %d", &x[i], &y[i]);
    }
    dfs(0);
    printf("# %d %d\n",fact++,ans );
  }
}

/* test case
3
5
0 0
100 100
70 40
20 10
10 5
90 70
50 20
6
88 81
85 80
19 22
31 15
27 29
30 10
20 26
5 14
10
39 9
97 61
35 93
62 64
96 39
36 36
9 59
59 96
61 7
64 43
43 58
1 36
*/