/*Write a program that manages an array of student objects. Each student object
contains a name and age. The program should prompt the user to enter the
number of students and their respective names and ages. Afterward, calculate
and display the average age of all the students. Furthermore, find and print the
name of the oldest student in the array. Provide the code to implement this
program, including the necessary class definition and the logic to calculate the
average age and find the oldest student.*/
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;

    // Constructor to initialize student data
    Student(string n = "", int a = 0) : name(n), age(a) {}
};

int main() {
    int numStudents;
    
    // Prompt user for number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Dynamic allocation of Student array
    Student *students = new Student[numStudents];

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Age: ";
        cin >> students[i].age;
    }

    // Calculate average age
    int totalAge = 0, oldestAge = students[0].age;
    string oldestStudent = students[0].name;

    for (int i = 0; i < numStudents; i++) {
        totalAge += students[i].age;
        if (students[i].age > oldestAge) {
            oldestAge = students[i].age;
            oldestStudent = students[i].name;
        }
    }

    double averageAge = static_cast<double>(totalAge) / numStudents;

    // Display results
    cout << "\nAverage Age of Students: " << averageAge << endl;
    cout << "Oldest Student: " << oldestStudent << " (" << oldestAge << " years old)" << endl;

    // Free dynamically allocated memory
    delete[] students;

    return 0;
}
