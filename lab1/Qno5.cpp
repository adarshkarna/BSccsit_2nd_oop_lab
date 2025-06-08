/*WAP to implement dynamic memory allocation with new and delete
operators (for both simple variable and array variable).*/
#include <iostream>

using namespace std;

int main() {
    // Dynamic allocation of a simple variable
    int *ptr = new int;  // Allocating memory for an integer
    *ptr = 42;  // Assigning a value

    cout << "Dynamically allocated integer value: " << *ptr << endl;

    // Freeing the dynamically allocated memory for simple variable
    delete ptr;

    // Dynamic allocation of an array variable
    int *arr = new int[5];  // Allocating memory for an array of 5 integers

    // Assigning values to dynamically allocated array
    for (int i = 0; i < 5; i++) {
        arr[i] = (i + 1) * 10;
    }

    // Displaying array values
    cout << "Dynamically allocated array values: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Freeing the dynamically allocated memory for array variable
    delete[] arr;

    return 0;
}