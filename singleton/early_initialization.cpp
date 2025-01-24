// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class singleton{
    
    private:
    static singleton* obj;  //object create
    
    singleton(){
        cout<<"object created"<<endl;
    }
    
    public:
    static singleton* getInstance(){
        return obj;
    }
    
};
singleton* singleton::obj=new singleton();

int main() {
    singleton* obj1=singleton:: getInstance();
    singleton* obj2=singleton:: getInstance();
    
    cout<<"address of object1 is"<<obj1<<endl;
    cout<<"address of object2 is"<<obj2<<endl;
    
    
    cout<<"address of object1 is"<<&obj1<<endl;  
    cout<<"address of object2 is"<<&obj2<<endl;
    
    
    
    

    return 0;
}