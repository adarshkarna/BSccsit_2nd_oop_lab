/*WAP to swap values of two integers, two characters, two floats and two
strings respectively using function overloading.*/
#include <iostream>
#include <string>

using namespace std;

// Function to swap two integers
void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two characters
void swapValues(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

// Function to swap two floats
void swapValues(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

// Function to swap two strings
void swapValues(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int int1 = 10, int2 = 20;
    char char1 = 'A', char2 = 'B';
    float float1 = 1.5, float2 = 3.5;
    string str1 = "Hello", str2 = "World";

    // Displaying original values
    cout << "Before swapping:\n";
    cout << "Integers: " << int1 << ", " << int2 << endl;
    cout << "Characters: " << char1 << ", " << char2 << endl;
    cout << "Floats: " << float1 << ", " << float2 << endl;
    cout << "Strings: " << str1 << ", " << str2 << endl;

    // Swapping values using overloaded functions
    swapValues(int1, int2);
    swapValues(char1, char2);
    swapValues(float1, float2);
    swapValues(str1, str2);

    // Displaying swapped values
    cout << "\nAfter swapping:\n";
    cout << "Integers: " << int1 << ", " << int2 << endl;
    cout << "Characters: " << char1 << ", " << char2 << endl;
    cout << "Floats: " << float1 << ", " << float2 << endl;
    cout << "Strings: " << str1 << ", " << str2 << endl;

    return 0;
}