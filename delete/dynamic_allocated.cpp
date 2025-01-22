#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int(5);  // Dynamically allocated variable

    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;  // Dereferencing ptr

    // Correct way to free dynamically allocated memory
    delete ptr;  // Must delete to free memory

    // After delete, ptr becomes a dangling pointer, do not use it
    ptr = nullptr;  // Good practice to set it to nullptr

    return 0;
}


