// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/fisherman/problem
// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/fisherman/problem
#include<iostream>
using namespace std;
int g1, g2, g3, n, ans = 1e9, tot = 0, x, y, z, res = 0;
int g[4], vis[68], in[4];
void dfs(int d1, int d2, int d3) {
  int res = 0, res1 = 0;
  for (int i = 1; i <= n; i++) vis[i] = 0;
  int t = g[d1];
  while (t--) {
    int index = in[d1];
    int l = index, r = index;
    while (l>0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 3) {
        res += (index - l + 1);
        vis[l] = 1;
      } else {
        res += (r - index + 1);
        vis[r] = 1;
      }
    }
  }
  t = g[d2];
  while (t--) {
    int index = in[d2];
    int l = index, r = index;
    while (l > 0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 3) {
        res += (index - l + 1);
        vis[l] = 1;
      } else {
        res += (r - index + 1);
        vis[r] = 1;
      }
    }
  }
  t = g[d3];
  while (t--) {
    int index = in[d3];
    int l = index, r = index;
    while (l > 0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 3) {
        res += (index - l + 1);
        vis[l] = 1;
      } else {
        res += (r - index + 1);
        vis[r] = 1;
      }
    }
  }
  ans = min(ans, res);
  res=0;

   for(int i=1;i<=n;i++) vis[i]=0;
  t = g[d1];
  while (t--) {
    int index = in[d1];
    int l = index, r = index;
    while (l > 0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 1) {
        res += (r - index + 1);
        vis[r] = 1;

      } else {
        res += (index - l + 1);
        vis[l] = 1;
      }
    }
  }
  t = g[d2];
  while (t--) {
    int index = in[d2];
    int l = index, r = index;
    while (l > 0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 1) {
        res += (r - index + 1);
        vis[r] = 1;

      } else {
        res += (index - l + 1);
        vis[l] = 1;
      }
    }
  }
  t = g[d3];
  while (t--) {
    int index = in[d3];
    int l = index, r = index;
    while (l > 0 && vis[l]) l--;
    while (r <= n && vis[r]) r++;
    if (l < 1) l = -1e5; if (r > n) r = 1e5;
    if (index - l < r - index) {
      res += (index - l + 1);
      vis[l] = 1;
    } else if (index - l > r - index) {
      res += (r - index + 1);
      vis[r] = 1;
    } else {
      if (d1 != 1) {
        res += (r - index + 1);
        vis[r] = 1;

      } else {
        res += (index - l + 1);
        vis[l] = 1;
      }
    }
  }
  ans = min(ans, res);




}
int main() {
  int t=1;
 // cin >> t;
  while (t--) {
    int i, j;
    cin >> n;
    ans=1e9;
    cin>>in[1]>>in[2]>>in[3];
    cin>>g[1]>>g[2]>>g[3];
    dfs(1, 2, 3);
    dfs(1, 3, 2);
    dfs(2, 1, 3);
    dfs(2, 3, 1);
    dfs(3, 2, 1);
    dfs(3, 1, 2);
    cout << ans << endl;
  }
}