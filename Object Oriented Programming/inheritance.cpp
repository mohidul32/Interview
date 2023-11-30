#include<bits/stdc++.h>
using namespace std;
class Vehicle{
public:
	string brand="ford";
	void fun(){
		cout<<"Vehicle class"<<endl;
	}
};
class car: public Vehicle{
public:
	string model="Mustang";
};
int main(){
	car obj;
	obj.fun();
	cout<<obj.brand<<endl;
	cout<<obj.model<<endl;
}