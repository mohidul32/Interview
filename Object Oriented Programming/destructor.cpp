#include <iostream>  
using namespace std;  
class Employee  
 {  
   public:  
        Employee()    //constructor
        {    
            cout<<"Constructor called"<<endl;    
        }    
        ~Employee()     // destructor
        {    
            cout<<"Destructor called"<<endl;    
        }  
        void display(){
          cout<<"called display function"<<endl;
        }
};  
int main(void) {  
    Employee e1; 
    e1.display();

    return 0;  
} 