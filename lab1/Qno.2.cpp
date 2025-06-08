/*Implement a macro in C++ called "SQUARE" that takes an argument and
returns the square of that number. Use macro expansion techniques to
compute the square value without using any built-in mathematical functions.*/
#include <iostream>

#define SQUARE(x) ((x) * (x)) // Macro to compute the square of a number

int main() {
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Square of " << num << " is: " << SQUARE(num) << std::endl;

    return 0;
}