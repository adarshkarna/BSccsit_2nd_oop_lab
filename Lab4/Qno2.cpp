/*Write a program to implement Pointer to object and member access.*/
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor to initialize student data
    Student(string n, int a) : name(n), age(a) {}

    // Function to display student details
    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    // Creating a Student object dynamically using a pointer
    Student *ptr = new Student("Adarsh", 21);

    // Accessing member function using pointer
    cout << "Student Details:\n";
    ptr->display();

    // Free allocated memory
    delete ptr;

    return 0;
}