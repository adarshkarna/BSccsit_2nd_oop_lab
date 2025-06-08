/*WAP to find largest of two numbers using inline function.*/
#include <iostream>

using namespace std;

// Inline function to find the largest of two numbers
inline int largest(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    // Taking input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Finding and displaying the largest number
    cout << "The largest number is: " << largest(num1, num2) << endl;

    return 0;
}