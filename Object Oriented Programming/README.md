
# What Is Object-Oriented Programming?
Object-oriented programming (OOP) is a programming paradigm based on the concept of objects, which can contain data and code.
# OOP has several advantages.
 - OOP is faster and easier to execute.
 - OOP provides a clear structure for the programs.
 - OOP helps to keep the C++ code DRY "Don't Repeat Yourself", and makes the code easier to maintain, modify and debug.
 - OOP makes it possible to create full reusable applications with less code and shorter development time.
# C++ What are Classes and Objects?
<b>Object</b> : object is a class type variable.<br/>
<b>class</b>  : A class is a  template form which individual object can be created.</br>

Look at the following illustration to see the difference between class and objects:</br>

![example](./image/image2.png)
another example:
![example](./image/image3.png)
# Create a Class
```
class Student {      
  public:   // Access specifier         
    int age;      
    string Name; 
    int id;
};
```
# Create a object
```
class student{
public:
  int age,id;
  string name;
};

 int main(){
     student alice;
     alice.age=20; alice.id=1; alice.name="alice";
     cout<<"student name = "<<alice.name<<endl;
     cout<<"student age = "<<alice.age<<endl;
     cout<<"student id = "<<alice.id<<endl;

 }
```

# Class Methods
Methods are functions that belongs to the class.</br>
There are two ways to define functions that belongs to a class:
- Inside class definition
- Outside class definition
# Inside Example
```
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
```
# Outside method
This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:</br>
```
class student {
public:
  int age, id;
  string name;
  void display();
};

//outside method display;
void student::display() {
  cout << "student name = " << name << endl;
  cout << "student age = " << age << endl;
  cout << "student id = " << id << endl;
}

int main() {
  student alice;
  alice.age = 20; alice.id = 1; alice.name = "alice";
  alice.display();

}
```

# Constructors
A constructor in C++ is a special method that is automatically called when an object of a class is created.</br>
A constructor has no return type.To create a constructor, use the same name as the class, followed by parentheses ():</br>
```
class student{
public:
  int age,id;
  string name;
  student(){ // constructor
    cout<<"constructor"<<endl;
  }
};
 int main(){
     student alice;
 }
```

# Constructor Parameters
Constructors can also take parameters (just like regular functions), which can be useful for setting initial values for attributes.
```
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
```
# C++ Access Specifiers
In C++, there are three access specifiers:</br>

- <b>public : </b>members are accessible from outside the class.
- <b>private : </b>members cannot be accessed (or viewed) from outside the class.
- <b>protected : </b>members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
```
class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
```
<b><h1></h>Note : </h1></b> By default, all members of a class are private if you don't specify an access specifier: 
```
class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};
```

# Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).that is known data hiding. If you want others to read or modify the value of a private member, you can provide public get and set methods.

```
class Employee{
private:
	int salary;
public:
  //getter method
	void setter(int s){
      salary=s;
	}
  //setter method
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
```










