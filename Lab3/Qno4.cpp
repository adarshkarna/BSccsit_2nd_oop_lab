/*Write a C++ program that defines a class called "Rectangle" with private
member variables "length" and "width". The class should have the following
member functions:
i. A default constructor that initializes both "length" and "width" to 0.
ii. A parameterized constructor that takes two arguments and initializes
"length" and "width" accordingly.
iii. A function called "calculateArea" that calculates and returns the area of
the rectangle.
iv. A function called "doubleSize" that takes a Rectangle object as an
argument, doubles its length and width, and returns the modified object.
In the main function, create a Rectangle object using the parameterized
constructor with the values 4 and 5. Then, pass this object to the "doubleSize"
function, and display the area of the modified rectangle.*/
#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor initializing length and width to 0
    Rectangle() : length(0), width(0) {}

    // Parameterized constructor initializing length and width with given values
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }

    // Function to double the size of a rectangle object and return modified object
    Rectangle doubleSize(Rectangle rect) {
        rect.length *= 2;
        rect.width *= 2;
        return rect;
    }

    // Function to display the rectangle's dimensions
    void display() {
        cout << "Rectangle Dimensions: " << length << " x " << width << endl;
    }
};

int main() {
    // Creating a Rectangle object with values 4 and 5
    Rectangle rect1(4, 5);

    cout << "Original Rectangle:\n";
    rect1.display();
    cout << "Original Area: " << rect1.calculateArea() << endl;

    // Doubling the size of the rectangle
    Rectangle rect2 = rect1.doubleSize(rect1);

    cout << "\nModified Rectangle:\n";
    rect2.display();
    cout << "Modified Area: " << rect2.calculateArea() << endl;

    return 0;
}