#include <iostream>

int main() {
    // Example 1: Undefined Behavior
    int number;  // uninitialized variable

    // Using the uninitialized variable
    std::cout << "Example 1: Undefined Behavior\n";
    std::cout << "Undefined Value: " << number << std::endl;  // Undefined behavior

    // Example 2: Predictable Program Behavior
    int initializedNumber = 2;  // initialized variable

    // Using the initialized variable
    std::cout << "\nExample 2: Predictable Program Behavior\n";
    std::cout << "Initialized Value: " << initializedNumber << std::endl;  // Output: 0

    // Example 3: Compiler Warnings
    int anotherNumber;  // uninitialized variable

    // Compiler warning (if enabled): 'anotherNumber' is used uninitialized or weird behavior values
    std::cout << "\nExample 3: Weird Behavior (Unpredictable)\n" << 3 + anotherNumber << std::endl;

    // Example 4: Readability and Maintainability
    int x = 10;
    int y = 20;

    std::cout << "\nExample 4: Readability and Maintainability\n";
    std::cout << "Sum of x and y: " << x + y << std::endl;

    // Example 5: Avoiding Garbage Values
    int sum;  // uninitialized variable

    // Using the uninitialized variable could lead to unpredictable results
    std::cout << "\nExample 5: Avoiding Garbage Values\n";
    std::cout << "Garbage Value: " << sum << std::endl;  // Garbage value

    // Using auto for type inference
    auto x1 = 5;       // x is deduced as int
    auto y1 = 3.14;    // y is deduced as double

    // Using suffixes for numeric literals
    auto a = 42;      // a is deduced as int
    auto b = 3.14f;   // b is deduced as float

    // Displaying the values
    std::cout << "\n\nx: " << x1 << " (type: " << typeid(x1).name() << ")\n";
    std::cout << "y: " << y1 << " (type: " << typeid(y1).name() << ")\n";
    std::cout << "a: " << a << " (type: " << typeid(a).name() << ")\n";
    std::cout << "b: " << b << " (type: " << typeid(b).name() << ")\n";


    unsigned int unsignedInt = 0;
    unsignedInt--;
    std::cout << std::endl << std::endl << unsignedInt << std::endl << std::endl;

    int oneMil = 1'000'000;

    std::cout << oneMil << std::endl;

    return 0;
}