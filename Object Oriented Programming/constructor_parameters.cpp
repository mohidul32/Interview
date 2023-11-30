#include<bits/stdc++.h>
using namespace std;
class student{
public:
  int age,id;
  string name;
  student(int ag,int i,string nm){//Constructor Parameters
      age=ag; id=i; name=nm;
  }
};

int main(){
     student alice(20,1,"alice");
     cout<<"student name = "<<alice.name<<endl;
     cout<<"student age = "<<alice.age<<endl;
     cout<<"student id = "<<alice.id<<endl;

 }