// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/detect-cycle-in-directed-graph/submissions/code/1371731150
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int dp[100][100], parent[100];
int vis[100];
int n, m;
int mx = 1e9;
vector<int>g[100];
vector<int>vt;
void fun(int s,int e){
	vector<int>v;
	int sum=0;
	while(1){
	
      v.push_back(s);
      if(s==e) break;
      s=parent[s];
      sum+=s;  
	}
	if(sum<mx){
		mx=sum;
		vt=v;
	}

}
void dfs(int node,int p){
	for(int x:g[node]){
		if(x==p){
		 fun(node,x);
		 continue;
		}
		if(vis[x]==1) continue;
		parent[x]=node;
		vis[x]=1;
		dfs(x,p);
	}
	vis[node]=0;
}
int main() {
    int i, j, x, y;
    cin >> n >> m;
    for (i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x].push_back(y);
    }
    for(i=1;i<=n;i++){
    	for(j=1;j<=n;j++) vis[j]=0;
    		vis[i]=1;
    	dfs(i,i);
    }
    sort(vt.begin(),vt.end());
    for(int x:vt) cout<<x<<" ";
    	cout<<endl;
}