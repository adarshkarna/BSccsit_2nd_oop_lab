/*WAP to implement return by reference.*/
#include <iostream>

using namespace std;

// Function returning a reference to an integer
int& getMax(int &a, int &b) {
    return (a > b) ? a : b; // Returns reference to the larger variable
}

int main() {
    int num1, num2;

    // Taking input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Calling function and modifying the returned reference
    int &largest = getMax(num1, num2);
    cout << "Largest number before modification: " << largest << endl;

    // Modifying the reference
    largest += 10; // Increases the largest number by 10

    // Display results
    cout << "Largest number after modification: " << largest << endl;
    cout << "Updated values - Num1: " << num1 << ", Num2: " << num2 << endl;

    return 0;
}