/*Create a class called “time” with data member hour, minute and second.
Initialize all the data member using constructor. WAP to add two time object
using necessary member functions and display the result.*/
#include <iostream>

using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    // Constructor to initialize time values
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    // Function to add two Time objects
    Time addTime(const Time &t) {
        int totalSeconds = (hour + t.hour) * 3600 + (minute + t.minute) * 60 + (second + t.second);
        
        return Time(totalSeconds / 3600, (totalSeconds / 60) % 60, totalSeconds % 60);
    }

    // Function to display time
    void display() {
        cout << hour << "h:" << minute << "m:" << second << "s\n";
    }
};

int main() {
    // Creating two Time objects
    Time t1(2, 45, 30), t2(1, 20, 45);

    cout << "Time 1: ";
    t1.display();

    cout << "Time 2: ";
    t2.display();

    // Adding two time objects
    Time sum = t1.addTime(t2);

    cout << "Sum of times: ";
    sum.display();

    return 0;
}