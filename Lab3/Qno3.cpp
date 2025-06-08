/*Create a C++ class called 'Person' with a constructor that initializes the name
and age member variables. Implement a copy constructor that creates a new
Person object by copying the name and age from an existing object. Show the
usage of both constructors by creating an object named 'person1' with name
'Sunil' and age 25. Then, use the constructors to create another object named
'person2' with the same name and age as 'person1'. Print the details (name and
age) of 'person2'.*/
#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(string n, int a) : name(n), age(a) {}

    // Copy Constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
    }

    // Function to display person's details
    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    // Creating person1 using the constructor
    Person person1("Sunil", 25);

    // Creating person2 using the copy constructor
    Person person2(person1);

    // Displaying details of person2
    cout << "Details of Person 2 (copied from Person 1):\n";
    person2.display();

    return 0;
}