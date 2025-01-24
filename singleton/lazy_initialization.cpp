#include <iostream>
using namespace std;

class singleton {
private:
    static singleton* obj;  // Object is not created at the start
    
    singleton() {
        cout << "Object created" << endl;
    }

public:
    static singleton* getInstance() {
        // Create the object only if it doesn't exist yet
        if (obj == nullptr) {
            obj = new singleton();
        }
        return obj;
    }
};

// Static member is just declared, but not initialized
singleton* singleton::obj = nullptr;

int main() {
    singleton* obj1 = singleton::getInstance();  // First time, object is created
    singleton* obj2 = singleton::getInstance();  // No new object, returns the same object
    
    cout << "Address of object1 is " << obj1 << endl;
    cout << "Address of object2 is " << obj2 << endl;

    cout << "Address of obj1 is " << &obj1 << endl;  
    cout << "Address of obj2 is " << &obj2 << endl;

    return 0;
}
