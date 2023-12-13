// https://www.careercup.com/question?id=6260555839963136&fbclid=IwAR04xzfVUyV8oohc4bEzURYMYz96SMlHgEG0Dw84iXxf8jKXJ_sMuGYFtoE
#include<iostream>
using namespace std;
int main(){
	long long n,i,j,x,y;
	long long ans=0;
	cin>>n;
	long long a[n+2];
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=n;i++){
	 long long index=i;
		for(j=i+1;j<=n;j++){
			if(a[j]<a[index]){
				index=j;
			}
		}
		swap(a[i],a[index]);
	}
    for(i=1;i<=n;i++){
    	for(j=i+1;j<=n;j++){
    		x=a[i]|a[j];
            y=(1LL<<(j-i-1));
            ans+=(x*y);
    	}
    }
    cout<<ans<<endl;
}