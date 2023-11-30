#include <iostream>
#include "external_class.h"
using namespace std;

int main()
{
  external_class ob;
  ob.display();
  int x=ob.add(10,25);
  cout<<x<<endl;
}
