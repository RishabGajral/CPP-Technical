
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base{
public:
    Base(){
        cout<<"Base class"<<endl;
    }
    virtual void fun(){
        cout<<"virtual Base called"<<endl;
    }
};
class Derived:public Base{
public:
    Derived(){
        cout<<"Derived class called"<<endl;
    }
    void fun(){
        cout<<"Derived Fun called"<<endl;
    }
    
};

int main()
{ 
    Derived D;
    Base* B =&D;
    B->fun();
    return 1;
}

/*.  output
Base class
Derived class called
Derived Fun called

conclusion:

-->If you are calling fun() directly on a Derived object, there's no need for a virtual function—the correct function is called automatically.
-->Use virtual functions only when working with base class pointers or references and you need runtime polymorphism*/
