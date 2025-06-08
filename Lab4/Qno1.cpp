/*Create a class time having data members as hour, minute and second. Then add two-
time objects taking object as a function argument and subtract two-time objects taking

objects as an function arguments and as well as returning object by the function
concept. Implement nameless temporary object concept somewhere in your code.*/
#include <iostream>

using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    // Function to add two time objects and return result as nameless temporary object
    Time addTime(const Time &t) {
        int totalSeconds = (hour + t.hour) * 3600 + (minute + t.minute) * 60 + (second + t.second);
        return Time(totalSeconds / 3600, (totalSeconds / 60) % 60, totalSeconds % 60); // Nameless temporary object
    }

    // Function to subtract two time objects and return result as nameless temporary object
    Time subtractTime(const Time &t) {
        int totalSeconds = (hour * 3600 + minute * 60 + second) - (t.hour * 3600 + t.minute * 60 + t.second);
        totalSeconds = (totalSeconds < 0) ? 0 : totalSeconds; // Prevent negative time
        return Time(totalSeconds / 3600, (totalSeconds / 60) % 60, totalSeconds % 60); // Nameless temporary object
    }

    // Function to display time
    void display() {
        cout << hour << "h:" << minute << "m:" << second << "s\n";
    }
};

int main() {
    // Creating two time objects
    Time t1(2, 45, 30), t2(1, 20, 15);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    // Adding two time objects
    Time sum = t1.addTime(t2);
    cout << "Sum of times: ";
    sum.display();

    // Subtracting two time objects
    Time diff = t1.subtractTime(t2);
    cout << "Difference of times: ";
    diff.display();

    return 0;
}