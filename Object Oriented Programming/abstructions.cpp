#include<bits/stdc++.h>
using namespace std;
class MobileMessage{
public:
	 void call(){
	 	cout<<"Called call function"<<endl;
	 }
	virtual void sendMessage()=0;
};
class alice: public MobileMessage{
public:
	void sendMessage(){
	 	cout<<"alice"<<endl;
	 }
};
class bob: public MobileMessage{
public:
	void sendMessage(){
	 	cout<<"bob"<<endl;
	 }
};
int main(){
	 MobileMessage *ob;
     alice a;
     bob b;
     ob=&a;
     ob->sendMessage();
     ob=&b;
     ob->sendMessage();
     return 0;
}