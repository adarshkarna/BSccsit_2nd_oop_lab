/*Define a class called BankAccount with private member variables accountNumber,
balance, and a static member variable totalAccounts to keep track of the total number
of bank accounts created. Implement the following functionalities:
i. A constructor that initializes the accountNumber and balance variables and
increments the totalAccounts count.
ii. A member function deposit() that takes an amount as input and adds it to the balance
of the account.
iii. A member function withdraw() that takes an amount as input and subtracts it from
the balance, only if the balance is sufficient.
iv. A static member function getTotalAccounts() that returns the total number of bank
accounts created.*/
#include <iostream>

using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    static int totalAccounts; // Static variable to track number of accounts

public:
    // Constructor to initialize account number and balance, and increment totalAccounts
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {
        totalAccounts++;
    }

    // Function to deposit an amount into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount.\n";
        }
    }

    // Function to withdraw an amount from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully.\n";
        } else {
            cout << "Insufficient balance or invalid amount.\n";
        }
    }

    // Function to display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << "\nBalance: $" << balance << endl;
    }

    // Static function to get total number of bank accounts created
    static int getTotalAccounts() {
        return totalAccounts;
    }
};

// Initializing static variable
int BankAccount::totalAccounts = 0;

int main() {
    // Creating bank accounts
    BankAccount acc1(101, 500.0);
    BankAccount acc2(102, 1000.0);

    // Displaying initial account details
    cout << "Initial Account Details:\n";
    acc1.displayAccount();
    acc2.displayAccount();

    // Performing transactions
    acc1.deposit(200);
    acc1.withdraw(100);
    acc2.withdraw(1200); // Attempt to withdraw more than balance

    // Displaying updated account details
    cout << "\nUpdated Account Details:\n";
    acc1.displayAccount();
    acc2.displayAccount();

    // Displaying total accounts created
    cout << "\nTotal Bank Accounts Created: " << BankAccount::getTotalAccounts() << endl;

    return 0;
}