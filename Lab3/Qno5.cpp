/*WAP to show the destructor call such that it prints the message “memory is
released”.*/
#include <iostream>

using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Object is created." << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Memory is released." << endl;
    }
};

int main() {
    cout << "Entering main function..." << endl;
    
    // Creating an object inside a block scope
    {
        Demo obj; // Object creation
        cout << "Inside block scope." << endl;
    } // Object goes out of scope, destructor is called

    cout << "Exiting main function..." << endl;

    return 0;
}