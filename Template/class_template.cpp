/******************************************************************************

  A class template allows defining a class that can handle multiple data types
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T> // making this. treate T as a variable type
class Base{
    public:
    T val;
    Base(T data){
        val=data;
    }
};
int main()
{
    Base<int> obj(3);
    cout<<obj.val<<endl;
    
    Base<double> obj1(3.565);
    cout<<obj1.val<<endl;
    

    return 0;
}
