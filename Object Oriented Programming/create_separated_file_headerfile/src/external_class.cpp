#include "external_class.h"
#include<iostream>
using namespace std;

external_class::external_class()
{
   cout<<"i am constructor"<<endl;
}
void external_class::display(){
    cout<<"i am display function"<<endl;
}
int external_class::add(int x,int y){
    return x+y;
}

external_class::~external_class()
{
    //dtor
}
