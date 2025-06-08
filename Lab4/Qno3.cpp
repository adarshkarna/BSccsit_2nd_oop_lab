/*Create a class called Rectangle with private member variables length and width and
member functions read and display the dimensions of a rectangle. Implement the
following functionalities:
i. Dynamically create a single Rectangle object, read and display the dimensions of
the rectangle object.
ii. Dynamically create an array of Rectangle objects, read and display the dimensions
of each rectangle in the array.*/
#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Function to read dimensions
    void readDimensions() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    // Function to display dimensions
    void displayDimensions() {
        cout << "Rectangle - Length: " << length << ", Width: " << width << endl;
    }
};

int main() {
    // Dynamically creating a single Rectangle object
    Rectangle *singleRect = new Rectangle;

    cout << "Reading dimensions for a single rectangle:\n";
    singleRect->readDimensions();
    cout << "Displaying dimensions:\n";
    singleRect->displayDimensions();

    // Freeing memory for single rectangle
    delete singleRect;

    // Dynamically creating an array of Rectangle objects
    int numRectangles;
    cout << "\nEnter the number of rectangles: ";
    cin >> numRectangles;

    Rectangle *rectArray = new Rectangle[numRectangles];

    // Reading dimensions for each rectangle
    for (int i = 0; i < numRectangles; i++) {
        cout << "\nReading dimensions for rectangle " << i + 1 << ":\n";
        rectArray[i].readDimensions();
    }

    // Displaying dimensions for each rectangle
    cout << "\nDisplaying dimensions of all rectangles:\n";
    for (int i = 0; i < numRectangles; i++) {
        rectArray[i].displayDimensions();
    }

    // Freeing memory for the array of rectangles
    delete[] rectArray;

    return 0;
}