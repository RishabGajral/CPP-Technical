#include <iostream>

int main() {
    int x = 5;  // Static (local) variable
    int* ptr = &x;  // Pointer to local variable

    std::cout << "Value of x: " << *ptr << std::endl;  // Dereferencing ptr

    // No need to delete ptr as x is a local variable
    // Deleting ptr would be incorrect and cause undefined behavior
    // delete ptr;  // This is incorrect and will cause undefined behavior

    return 0;
}
