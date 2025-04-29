#include <iostream>

int main() {
    // Fictional scenario: Age verification

    int age = 30;

    if (age >= 18) {
        std::cout << "You are eligible to vote.\n";

        // Nested if-else for additional checks
        if (age >= 21) {
            std::cout << "You are also eligible to purchase alcohol.\n";
        } else {
            std::cout << "You are not eligible to purchase alcohol.\n";
        }
    } else {
        std::cout << "You are not eligible to vote.\n";
    }

    return 0;
}
