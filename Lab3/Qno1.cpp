/*WAP to create a class Teacher with data members teacher_id, teacher_name,
department and subject_taught and create member functions for reading and
displaying data members. At least one of the member function should be
defined outside the class.*/
#include <iostream>
#include <string>

using namespace std;

class Teacher {
private:
    int teacher_id;
    string teacher_name;
    string department;
    string subject_taught;

public:
    // Function to read data members (Defined inside the class)
    void readData() {
        cout << "Enter Teacher ID: ";
        cin >> teacher_id;
        cin.ignore(); // Clear buffer before reading string input

        cout << "Enter Teacher Name: ";
        getline(cin, teacher_name);

        cout << "Enter Department: ";
        getline(cin, department);

        cout << "Enter Subject Taught: ";
        getline(cin, subject_taught);
    }

    // Function to display data members (Defined outside the class)
    void displayData(); // Function prototype
};

// Function definition outside the class
void Teacher::displayData() {
    cout << "\nTeacher Details:\n";
    cout << "ID: " << teacher_id << "\n";
    cout << "Name: " << teacher_name << "\n";
    cout << "Department: " << department << "\n";
    cout << "Subject Taught: " << subject_taught << "\n";
}

int main() {
    Teacher t1;

    // Read and display teacher details
    t1.readData();
    t1.displayData();

    return 0;
}