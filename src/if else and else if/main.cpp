#include <iostream>
#include <string>


int main() {
    // Fictional scenario: Password validation

    // Hardcoded password for demonstration
    std::string enteredPassword = "Password123";

    // Chaining if-else statements
    if (enteredPassword == "open sesame") {
        std::cout << "Access granted! Welcome.\n";
    } else if (enteredPassword == "password123") {
        std::cout << "Nice try, but that's not the right password.\n";
    } else if (enteredPassword == "qwerty") {
        std::cout << "Seriously? Try a stronger password.\n";
    } else {
        std::cout << "Access denied! Invalid password.\n";
    }

    // Multiple if statements executed at once
    bool isUpperCase = false;
    bool isDigitPresent = false;

    for (char ch : enteredPassword) {
        if (std::isupper(ch)) {
            isUpperCase = true;
        }
        if (std::isdigit(ch)) {
            isDigitPresent = true;
        }
    }

    if (isUpperCase) {
        std::cout << "Your password contains at least one uppercase letter.\n";
    }

    if (isDigitPresent) {
        std::cout << "Your password contains at least one digit.\n";
    }

    if (!isUpperCase && !isDigitPresent) {
        std::cout << "Consider adding uppercase letters and digits to strengthen your password.\n";
    }

    return 0;
}
