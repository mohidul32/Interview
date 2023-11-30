#include<bits/stdc++.h>
using namespace std;
class student{
public:
  int age,id;
  string name;
  //display function is method.
  void display(){
    cout<<"student name = "<<name<<endl;
    cout<<"student age = "<<age<<endl;
    cout<<"student id = "<<id<<endl;
  }
};

int main(){
     student alice;
     alice.age=20; alice.id=1; alice.name="alice";
     alice.display();
}