
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base{};
class Derived:public Base{};

class dynamic_base{
public:    
   virtual void fun(){}; 
};
class dynamic_derived:public dynamic_base{
    
};

int main()
{ 
  //1. static cast. ->safe casting at compile time. Generally used for upcasting
   Derived D;
   Base* B= static_cast <Base*> (&D);
   
  /* 
  2. dynamic cast ->used in downcasting, Runtime check
  - can be used only with runtime polymorphism (virtual function)
  - Assinging derived obj with base class pointer and cast that base pointer to derived
  - if casting returns NULL -->unsuccessfull otherwise successfull
  */
  dynamic_base *base=new dynamic_derived;
  dynamic_derived *derived=dynamic_cast<dynamic_derived*>(base);
  
  //3. constant casting
  /*
  -> Used to remove const or volatile from variables.
  -> Allows modification of const data (but modifying a truly constant object is undefined behavior).
  */
  int i=2;
  const int* ptr=&i;
  int* res=const_cast<int*>(ptr);
  *res=6;
  cout<<"res is :"<<(*res)<<endl;
  cout<<"i is :"<<i<<endl;
  /* output is
  res is :6
  i is :6
  */
  
  //4. Reinterpretor casting
  /* 
  - For raw memory manupulation
  - For convert between other types.
  */
  
  int a;
  void* pointer=&a;
  int* integer_pointer=reinterpret_cast<int*>(pointer);
  
    return 0;
}

/* SUMMARY
Cast               Type	Purpose	                         Compile-Time / Runtime     	Use Case
static_cast       Safe, explicit conversions	           Compile-time	Upcasting      primitive type conversions
dynamic_cast	    Safe downcasting (Base → Derived)	     Runtime	                   Used with polymorphic classes
const_cast	      Remove const or volatile qualifiers	   Compile-time	               Modify const data (if safe)
reinterpret_cast	Low-level conversion (bitwise)	       Compile-time	               Convert between pointer types, raw memory manipulation

*/
