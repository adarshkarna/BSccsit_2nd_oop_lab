/*WAP to find largest of two numbers using inline function.
2. Write a C++ function called calculateDiscountedPrice that calculates the
discounted price of an item. The function should have two parameters: price
(representing the original price) and discountPercentage (with a default value
of 10%). The function should return the calculated discounted price.
In the main function, prompt the user to enter the original price of an item.
Then, call the calculateDiscountedPrice function twice: once with the default
discount percentage and once with a specific discount percentage entered by
the user. Finally, print the original price and the two discounted prices.*/
#include <iostream>

using namespace std;

// Task 1: Inline function to find the largest of two numbers
inline int largest(int a, int b) {
    return (a > b) ? a : b;
}

// Task 2: Function to calculate discounted price with a default discount of 10%
double calculateDiscountedPrice(double price, double discountPercentage = 10.0) {
    return price - (price * discountPercentage / 100);
}

int main() {
    // Task 1: Largest of two numbers
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "The largest number is: " << largest(num1, num2) << endl;

    // Task 2: Calculating discounted price
    double originalPrice, userDiscount;
    
    cout << "\nEnter the original price of the item: ";
    cin >> originalPrice;

    // Using default discount percentage (10%)
    double discountedPriceDefault = calculateDiscountedPrice(originalPrice);

    // Using user-defined discount percentage
    cout << "Enter a specific discount percentage: ";
    cin >> userDiscount;
    double discountedPriceUser = calculateDiscountedPrice(originalPrice, userDiscount);

    // Display results
    cout << "\nOriginal Price: $" << originalPrice << endl;
    cout << "Discounted Price (Default 10% off): $" << discountedPriceDefault << endl;
    cout << "Discounted Price (" << userDiscount << "% off): $" << discountedPriceUser << endl;

    return 0;
}