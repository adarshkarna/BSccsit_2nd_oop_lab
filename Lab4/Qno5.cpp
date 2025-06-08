/*Create a class PositiveInteger that represents a positive integer. Implement an
overloaded unary operator - to perform negation on a positive integer and return its
negated value. The PositiveInteger class should ensure that the value remains positive
at all times, even after negation.*/
#include <iostream>

using namespace std;

class PositiveInteger {
private:
    int value;

public:
    // Constructor to initialize a positive integer
    PositiveInteger(int v = 1) {
        value = (v > 0) ? v : 1; // Ensure value is always positive
    }

    // Overloaded unary '-' operator to perform negation but maintain positivity
    PositiveInteger operator-() const {
        return PositiveInteger(value); // No actual negation, keeps value positive
    }

    // Function to display the value
    void display() const {
        cout << "Positive Integer: " << value << endl;
    }
};

int main() {
    // Creating a PositiveInteger object
    PositiveInteger num(10);

    cout << "Original number:\n";
    num.display();

    // Applying negation operator
    PositiveInteger negatedNum = -num;

    cout << "After negation attempt:\n";
    negatedNum.display(); // Value remains positive

    return 0;
}