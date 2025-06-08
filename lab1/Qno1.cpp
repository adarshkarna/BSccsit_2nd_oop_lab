/*Write a program to read inputs(int, float, double, char, char[],string) from a
keyboard and display the output in the monitor using Input/Output streams.
Use cin.get(str, size) for char[] and getline(cin, str) for string. Where str is any
string variable.*/
#include <iostream>
#include <cstring> // for char array operations
#include <string>  // for string operations

using namespace std;

int main() {
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;
    char charArray[50];
    string strValue;

    // Reading integer input
    cout << "Enter an integer: ";
    cin >> intValue;

    // Reading float input
    cout << "Enter a float: ";
    cin >> floatValue;

    // Reading double input
    cout << "Enter a double: ";
    cin >> doubleValue;

    // Clearing input buffer before reading characters and strings
    cin.ignore();

    // Reading single character input
    cout << "Enter a character: ";
    cin.get(charValue);

    cin.ignore(); // Ignore newline character left in buffer

    // Reading character array input
    cout << "Enter a character array (max 50 characters): ";
    cin.get(charArray, 50);

    cin.ignore(); // Ignore newline character left in buffer

    // Reading string input
    cout << "Enter a string: ";
    getline(cin, strValue);

    // Displaying the input values
    cout << "\nYou entered:\n";
    cout << "Integer: " << intValue << "\n";
    cout << "Float: " << floatValue << "\n";
    cout << "Double: " << doubleValue << "\n";
    cout << "Character: " << charValue << "\n";
    cout << "Character Array: " << charArray << "\n";
    cout << "String: " << strValue << "\n";

    return 0;
}