/*Implement a C++ program that demonstrates the usage of namespaces. Create
three namespaces called "English","Nepali" and “Newa”. All namespaces
should define a function called "greet" that takes no parameters and returns a
greeting message in the respective language. In the main function, invoke the
"greet" function from each namespace and display the greetings.*/
#include <iostream>

namespace English {
    void greet() {
        std::cout << "Hello! Welcome to the program.\n";
    }
}

namespace Nepali {
    void greet() {
        std::cout << "Namaste! Karyakram ma swagat chha.\n";
    }
}

namespace Newa {
    void greet() {
        std::cout << "Jwojalapa! Program ma swagat chha.\n";
    }
}

int main() {
    // Invoking greet function from each namespace
    std::cout << "Greetings in different languages:\n";
    
    English::greet();
    Nepali::greet();
    Newa::greet();

    return 0;
}