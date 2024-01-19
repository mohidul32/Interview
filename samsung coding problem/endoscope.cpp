// https://www.careercup.com/question?id=5663232835452928
//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/endoscope
#include<iostream>
#include<queue>
#include<map>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef pair<int, int>  pi;
int const N = 1001;
map<pi, int>mp;
int dis[N + 2][N + 3], vis[N + 3][N + 3];
int index[N+2][N+3];
int ans = 0, n, k, m;
int fun(int  x, int y) {
  return index[x][y];
}
void bfs(int x1, int y1) {
  queue<pi>q;
  dis[x1][y1] = 1;
  vis[x1][y1] = 1;
  q.push({x1, y1});
  while (q.size()) {
    pi p = q.front();
    q.pop();
    int x = p.first, y = p.second;
    int d = dis[x][y];
    int l = fun(x, y);
    if (d <= k) {
      ans++;
    }
    if (d >= k) continue;
    if (x + 1 <= n &&  vis[x + 1][y] == 0 && mp[ {l, fun(x + 1, y)}] == 1 && mp[ {fun(x + 1, y), l}] == 1) {
      dis[x + 1][y] = d + 1;
      vis[x + 1][y] = 1;
      q.push({x + 1, y});
    }
    if (y + 1 <= m && vis[x][y + 1] == 0 && mp[ {l, fun(x, y + 1)}] == 1 && mp[ {fun(x, y + 1), l}] == 1) {
      dis[x][y + 1] = d + 1;
      vis[x][y + 1] = 1;
      q.push({x, y + 1});
    }
    if (x - 1 >= 1 && vis[x - 1][y] == 0 && mp[ {l, fun(x - 1, y)}] == 1 && mp[ {fun(x - 1, y), l}] == 1) {

      dis[x - 1][y] = d + 1;
      vis[x - 1][y] = 1;
      q.push({x - 1, y});
    }
    if (y - 1 >= 1 && vis[x][y - 1] == 0 && mp[ {l, fun(x, y - 1)}] == 1 && mp[ {fun(x, y - 1), l}] == 1) {
      dis[x][y - 1] = d + 1;
      vis[x][y - 1] = 1;
      q.push({x, y - 1});
    }
  }
}
void clearr() {
  int i, j, l;
  mp.clear();
  for (i = 0; i <= n; i++) {
    for (j = 0; j <= m; j++) {
      dis[i][j] = 0;
      vis[i][j] = 0;
    }
  }
}
void indexing(){
  int i,j,val=1;
  for(i=0;i<=N;i++){
    for(j=0;j<=N;j++) {
      index[i][j]=val;
      val++;
    }
  }
}
int main() {
  IOS;
  int test = 1;
  cin >> test;
  indexing();
  while (test--) {
   
    ans = 0;
    int  i, j, x1, y1, x, y,val=0,d;
    cin >> n >> m >> x1 >> y1 >> k;
    x1++; y1++;
     clearr();
    for (i = 1; i <= n; i++) {
      for (j = 1; j <= m; j++) {
        cin >> d;
        if(i==x1&&j==y1) val=d;
        x = fun(i, j);
        if (d == 0) continue;
        if (d == 1) {
         y = fun(i - 1, j); mp[ {x, y}] = 1;
         y = fun(i + 1, j); mp[ {x, y}] = 1;
         y = fun(i, j + 1); mp[ {x, y}] = 1;
         y = fun(i, j - 1); mp[ {x, y}] = 1;
        } else if (d == 2) {
         y = fun(i - 1, j); mp[ {x, y}] = 1;
         y = fun(i + 1, j); mp[ {x, y}] = 1;
        } else if (d == 3) {
         y = fun(i, j + 1); mp[ {x, y}] = 1;
         y = fun(i, j - 1); mp[ {x, y}] = 1;
        } else if (d == 4) {
         y = fun(i - 1, j); mp[ {x, y}] = 1;
         y = fun(i, j + 1); mp[ {x, y}] = 1;
        } else if (d == 5) {
         y = fun(i + 1, j); mp[ {x, y}] = 1;
         y = fun(i, j + 1); mp[ {x, y}] = 1;
        } else if (d == 6) {
         y = fun(i + 1, j); mp[ {x, y}] = 1;
         y = fun(i, j - 1); mp[ {x, y}] = 1;
        } else if (d == 7) {
          y = fun(i - 1, j); mp[ {x, y}] = 1;
          y = fun(i, j - 1); mp[ {x, y}] = 1;
        }
      }
    }
    if (k == 0) {
      cout << "0" << endl;
      continue;
    }
    if (val != 0) bfs(x1, y1);
    cout << ans << endl;
  }
}