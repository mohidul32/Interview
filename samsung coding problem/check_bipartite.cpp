//https://www.careercup.com/question?id=5137923582722048
#include<iostream>
using namespace std;
int dp[1000][1000],vis[1003],col[1004];
int n;
bool dfs(int node,int c){
	vis[node]=1;
	col[node]=c;
    for(int i=1;i<=n;i++){
    	if(dp[node][i]==0) continue;
    	int x=i;
    	if(vis[x]==0){
    	   bool ck=dfs(x,c^1);
    	   if(ck==false) return false;
    	}else{
    		if(col[x]==col[node]) return false;
    	}
    }
    return true;
}
int main(){
	int i,j,x,y,m;
	cin>>n>>m;
	for(i=1;i<=m;i++) {
		cin>>x>>y;
		dp[x][y]=1;
		dp[y][x]=1;
	}
    int f=1;
	for(i=1;i<=n;i++){
		if(vis[i]) continue;
		vis[i]=1;
		bool ck=dfs(i,0);
		if(!ck)  f=0;
	}
	if(f) cout<<"bipartite"<<endl;
	else cout<<"-1"<<endl;

}