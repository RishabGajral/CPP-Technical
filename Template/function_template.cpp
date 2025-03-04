/******************************************************************************

  function template helps to create a function which allow handling multiple data dtypes in a function
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T> // making this. treate T as a variable type
void fun(T a, T b){
  T temp=a+b;
  cout<<temp<<endl;
}
int main()
{
    int a=1;
    int b=2;
    string s="ab";
    string st="cd";
    
    fun(a,b);
    fun(s,st);

    return 0;
}
