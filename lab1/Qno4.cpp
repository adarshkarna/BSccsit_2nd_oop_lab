/*WAP to implement endl, setw, setprecision,fixed and scientific Manipulator.*/
#include <iostream>
#include <iomanip> // Required for setw, setprecision, fixed, scientific

using namespace std;

int main() {
    double num1 = 123.456789;
    double num2 = 9876.54321;

    // Using endl to move to a new line
    cout << "Demonstrating C++ Manipulators:" << endl;

    // Using setw to set width for alignment
    cout << setw(15) << "Number 1:" << setw(15) << num1 << endl;
    cout << setw(15) << "Number 2:" << setw(15) << num2 << endl;

    // Using setprecision to control decimal places
    cout << "\nUsing setprecision(4):\n";
    cout << "Number 1: " << setprecision(4) << num1 << endl;
    cout << "Number 2: " << setprecision(4) << num2 << endl;

    // Using fixed to display decimal numbers in fixed-point notation
    cout << "\nUsing fixed and setprecision(2):\n";
    cout << fixed << setprecision(2);
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    // Using scientific to display numbers in scientific notation
    cout << "\nUsing scientific notation:\n";
    cout << scientific;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    return 0;
}