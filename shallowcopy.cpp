/******************************************************************************
Shallow copy:
This concept is used for copy constructor, used as default method for copy constructor.
In this, When we assign other object data with other object data.
Instead of making a copy of the object reference is copied.
If any changes in any object data, it will be reflected in both the object data
Points to remember:
Both objects share the same memory for data.
Modifications to one object affect the other.
Double deletion can cause errors. 

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class dynamic_copy{
  public:
  int* data;
  
  dynamic_copy(int val){
      data =new int(val);
  }
  
  dynamic_copy(dynamic_copy& obj){
      data=obj.data;
  }
  ~dynamic_copy(){
      delete data;
  }
};
int main()
{
    dynamic_copy object1(4);
    dynamic_copy object2(object1);
    cout<<"object1 data is"<<*object1.data<<endl;
    cout<<"object2 data is"<<*object2.data<<endl;
    *(object1.data)=7;
    cout<<"object1 data is"<<*object1.data<<endl;
    cout<<"object2 data is"<<*object2.data<<endl;
    
}