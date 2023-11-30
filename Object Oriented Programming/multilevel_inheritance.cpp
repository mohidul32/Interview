#include<bits/stdc++.h>
using namespace std;
// Base class (parent)
class MyClass {
public:
	void myFunction() {
		cout << "parent class." << endl;
	}
};

// Derived class (child)
class MyChild: public MyClass {
public:
	void display() {
		cout << "MyChild class." << endl;
	}
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
public:
	void display1() {
		cout << "MyGrandChild class." << endl;
	}
};

int main() {
	MyGrandChild myObj;
	MyChild myObj1;
	myObj.myFunction();
	myObj.display();
	return 0;
}