// Base class
class father {
  public:
    void myFunction() {
      cout << "Some content in father class." ;
    }
};

// Another base class
class mother {
  public:
    void myOtherFunction() {
      cout << "Some content in mother class." ;
    }
};

// Derived class
class child: public father, public mother {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}