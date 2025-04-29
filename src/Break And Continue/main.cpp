#include <iostream>


int main() {
    for (int i = 0; i < 100; ++i) {
        // Skip even numbers using continue
        if (i % 2 == 0) {
            std::cout << "Skipped even number: " << i << "\n";
            continue;
        }

        // Break the loop if the number is greater than 7
        if (i > 7) {
            std::cout << "Breaking loop at " << i << "\n";
            break;
        }

        // Print other numbers
        std::cout << "Current number: " << i << "\n";
    }

    return 0;
}