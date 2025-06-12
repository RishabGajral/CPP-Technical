
#include <iostream>
#include <bits/stdc++.h>
#include <memory>
using namespace std;

class base{
    public:
    int a=10;
};

int main() {
   /*not a correct way: unique_ptr<base> base_obj=new base();
     because we are trying to assign a raw pointer returned by new object of base type and then assigning to the pointer of unique ptr type
   -->so the correct way is as below
   */
   /* 1st way is
   create a unique pointer and give the new object address to the constructor of the unique_ptr
   unique_ptr<base> base_obj(new base());
              OR   
   */
   unique_ptr<base> base_obj=make_unique<base>(); //creating a unique pointer type and  assign with make_unique<base> because it will return the address compatible to unique ptr type ptr address
   cout<<base_obj->a<<endl; // o/p=>10
   
   //now i will try to assign it to other unique ptr
   //unique_ptr<base>base_obj2=base_obj; //It is not allowed
   
   unique_ptr<base>base_obj2=move(base_obj);
   
   cout<<base_obj2->a<<endl; //o/p=>10
   cout<<base_obj->a<<endl; //segmentation fault because ownership moved
   /* when ownership is moved the base_obj becomes a NULL pointer
   */
   
}
