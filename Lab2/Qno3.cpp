/*Write a C++ function called updateEmployeeSalary that takes a reference
parameter salary and increases it by a given percentage. In the main function,
prompt the user to enter an employee's current salary and the percentage
increase. Call the updateEmployeeSalary function, passing the entered salary
and percentage increase. The function should modify the salary by increasing
it based on the given percentage. Finally, print the original salary and the
updated salary to verify the changes.*/
#include <iostream>

using namespace std;

// Function to update the employee's salary
void updateEmployeeSalary(double &salary, double percentageIncrease) {
    salary += (salary * percentageIncrease / 100);
}

int main() {
    double salary, percentageIncrease;

    // Prompt user for input
    cout << "Enter the employee's current salary: ";
    cin >> salary;

    cout << "Enter the percentage increase: ";
    cin >> percentageIncrease;

    // Store the original salary before update
    double originalSalary = salary;

    // Call the function to update the salary
    updateEmployeeSalary(salary, percentageIncrease);

    // Display original and updated salary
    cout << "\nOriginal Salary: $" << originalSalary << endl;
    cout << "Updated Salary: $" << salary << endl;

    return 0;
}