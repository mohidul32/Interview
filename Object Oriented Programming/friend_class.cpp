#include <iostream>
using namespace std;
 
class Myclass {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    Myclass(){
        private_variable = 100;
        protected_variable = 990;
    }
 
    // friend class declaration
    friend class Friend;
};

class Friend {
public:
    void display(Myclass &t){
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable<<endl;
    }
};

int main(){
    Myclass g;
    Friend fri;
    fri.display(g);
    return 0;
}