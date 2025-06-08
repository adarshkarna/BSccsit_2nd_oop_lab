/*WAP to find the volume of a cube, cuboid and cylinder using the concept of
function overloading.*/
#include <iostream>
#include <cmath> // For mathematical operations

using namespace std;

// Function to calculate the volume of a cube
double volume(double side) {
    return pow(side, 3);
}

// Function to calculate the volume of a cuboid
double volume(double length, double width, double height) {
    return length * width * height;
}

// Function to calculate the volume of a cylinder
double volume(double radius, double height, bool isCylinder) {
    return M_PI * pow(radius, 2) * height; // π × r² × h
}

int main() {
    double side, length, width, height, radius;

    // Cube
    cout << "Enter the side length of the cube: ";
    cin >> side;
    cout << "Volume of the cube: " << volume(side) << " cubic units\n";

    // Cuboid
    cout << "\nEnter the length, width, and height of the cuboid: ";
    cin >> length >> width >> height;
    cout << "Volume of the cuboid: " << volume(length, width, height) << " cubic units\n";

    // Cylinder
    cout << "\nEnter the radius and height of the cylinder: ";
    cin >> radius >> height;
    cout << "Volume of the cylinder: " << volume(radius, height, true) << " cubic units\n";

    return 0;
}