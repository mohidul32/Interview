// https://www.hackerrank.com/contests/target-samsung-13-nov19/challenges/sum-of-nodes-in-kth-level/problem
#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n, i, j, x, y,k,sum=0;
	cin >> k;
	string s;
	cin >> s;
	n = s.size();
	int level=-1;
	for(i=0;i<n;i++){
      if(s[i]=='(') level++;
      else if(s[i]==')') level--;
      else if(level==k){
      	 x=0;
      	 while(i<n&&s[i]>='0'&&s[i]<='9'){
      	 	y=s[i]-'0';
      	 	x=x*10+y;
      	 	i++;
      	 }
      	 sum+=x;
      	 i--;
      }
	}
	cout<<sum<<endl;

}