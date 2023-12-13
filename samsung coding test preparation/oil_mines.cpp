// https://www.careercup.com/question?id=5740719907012608
#include<iostream>
#include<vector>
using namespace std;
int k, n, a[20], ans = 1e9;
void dfs(vector<int> v,int sum1) {
	if(sum1>n) return;
   if(v.size()==k&&sum1==n){
   	 int mx=0,mn=1e9,index=1;
   	 for(int x:v){
   	 	int sum=0;
       while(x--){
          sum+=a[index];
          index++;
       }
       mx=max(mx,sum); mn=min(mn,sum);
   	 }
   	 ans=min(ans,mx-mn);
     return;
   }
   for(int i=1;i<=n-k+1;i++){
   	vector<int>vv;
   	vv=v;
   	vv.push_back(i);
   	dfs(vv,sum1+i);
   }
}
int main() {
	int i, j, x, y;
	cin >> k >> n;
	for (i = 1; i <= n; i++) cin >> a[i];
	vector<int>v;
	dfs(v,0);
	cout<<ans<<endl;
}

/*test case
2 4
6 10 13 2

3 4
6 10 13 2

2 4
6 10 13 2
*/