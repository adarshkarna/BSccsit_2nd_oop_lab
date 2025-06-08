/*WAP to implement pointer with array.*/
#include <iostream>

using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Array declaration
    int *ptr = arr;  // Pointer points to the first element of the array

    // Display array elements using pointer arithmetic
    cout << "Array elements using pointer: ";
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";  // Accessing elements using pointer
    }
    cout << endl;

    // Modifying array elements using pointer
    *(ptr + 2) = 100;  // Change the third element

    // Display modified array elements
    cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}