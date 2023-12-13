//https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/flip-columns/problem
#include<iostream>
using namespace std;
int n, m, k;
int ar[20][20],a[20],c[23+3][20],mx=0;
void fun(){
	int i,j;
     for(i=1;i<=n;i++){
     	for(j=1;j<=m;j++) c[i][j]=ar[i][j];
     }
    for(j=1;j<=m;j++){
    	for(i=1;i<=n;i++){
    		if(a[j]%2) c[i][j]^=1;
    	}
    }
    int  cnt=0;
    for(i=1;i<=n;i++){
    	int f=1;
    	for(j=1;j<=m;j++){
    		if(c[i][j]==0) f=0;
    	}
    	cnt+=f;
    }
    mx=max(mx,cnt);
}
void dfs(int index, int sum) {
	if (sum > k) return;
	if (index == m + 1) {
		if (sum != k) return;
		 fun();
		return;
	}
	for (int i = 0; i <= k; i++) {
		a[index] = i;
		dfs(index + 1, sum + i);
	}
}
int main() {
	int i, j, x, y;
	cin >> n >> m >> k;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++) cin >> ar[i][j];
	}
	dfs(1, 0);
	cout<<mx<<endl;
}