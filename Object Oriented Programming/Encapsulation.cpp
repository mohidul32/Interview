#include<bits/stdc++.h>
using namespace std;
class Employee{
private:
	int salary;
public:
	void setter(int s){
      salary=s;
	}
	int getSalary(){
		return salary;
	}
};
int main(){
	Employee obj;
	obj.setter(50000);
	int s=obj.getSalary();
	cout<<s<<endl;
}