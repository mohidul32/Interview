// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/aeroplane-bombing/problem
#include<iostream>
using namespace std;
int n, a[20][6], ar[20][7], ans = 0;
void fun(int i1) {
    int i, j, x = 5;
    int ii = i1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 5; j++) a[i][j] = ar[i][j];
    }
    while (x--) {
        for (j = 1; j <= 5; j++) {
            if (a[i1][j] == 2) {
                a[i1][j] = 0;
            }
        }
        i1++;
        if(i1>n) break;
    }
}
void dfs(int i,int j,int res) {
    ans=max(res,ans);
    if(i-1>=1&&j-1>=1&&a[i-1][j-1]!=2){
       dfs(i-1,j-1,res+a[i-1][j-1]);
    }
    if(i-1>=1&&j+1<=5&&a[i-1][j+1]!=2){
       dfs(i-1,j+1,res+a[i-1][j+1]);
    }
    if(i-1>=1&&a[i-1][j]!=2){
       dfs(i-1,j,res+a[i-1][j]);
    }
}
int main() {
    int t, fac = 1;
    cin >> t;
    while (t--) {
        int i, j, x, y;
        ans=0;
        cin >> n;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= 5; j++) cin >> ar[i][j];
        }
        for (i = 1; i <= max(n - 5 + 1,n); i++) {
            fun(i);
            if(a[n][3]!=2) dfs(n,3,a[n][3]);
            if(a[n][2]!=2) dfs(n,2,a[n][2]);
            if(a[n][4]!=2) dfs(n,4,a[n][4]);
        }
        cout << "#" << fac++ << " " << ans << endl;
    }
}


// // https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/aeroplane-bombing/problem
// #include<iostream>
// using namespace std;
// int n, a[20][6], ar[20][7], ans = 0;
// void fun(int i1) {
//   int i, j, x = 5;
//   int ii = i1;
//   for (i = 1; i <= n; i++) {
//     for (j = 1; j <= 5; j++) a[i][j] = ar[i][j];
//   }
//   while (x--) {
//     for (j = 1; j <= 5; j++) {
//       if (a[i1][j] == 2) {
//         a[i1][j] = 0;
//       }
//     }
//     i1++;
//     if (i1 > n) break;
//   }
// }
// void dfs() {
//   int p[6] = { -1, -1, -1, 0, -1, -1};
//   int c[6] = { -1, -1, -1, -1, -1, -1};
//   int mx = 0,i,j;
//   for (i = n; i >= 1; i--) {
//     for (j = 1; j <= 5; j++) {
//       if (a[i][j] == 2) {
//         c[j] = -1;
//         continue;
//       }
//       for (int k = max(j - 1, 1); k <= min(j + 1, 5); k++) {
//          if(p[k]!=-1) c[j]=max(c[j],p[k]+a[i][j]);
//       }
//       mx=max(mx,c[j]);
//     }
//     for(j=1;j<=5;j++) p[j]=c[j];
//   }
//   ans=max(ans,mx);
// }
// int main() {
//   int t, fac = 1;
//   cin >> t;
//   while (t--) {
//     int i, j, x, y;
//     ans = 0;
//     cin >> n;
//     for (i = 1; i <= n; i++) {
//       for (j = 1; j <= 5; j++) cin >> ar[i][j];
//     }
//     for (i = 1; i <= max(n - 5 + 1, n); i++) {
//       fun(i);
//       dfs();
//     }
//     cout << "#" << fac++ << " " << ans << endl;
//   }
// }