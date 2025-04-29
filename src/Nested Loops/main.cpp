#include <iostream>


// Prints a tree made of stars
int main() {
    int n = 5; // You can change the value of 'n' to control the size of the pattern

    // Outer loop for rows
    for (int i = 1; i <= n; ++i) {
        
        // Inner loop for spaces
        for (int j = 1; j <= n - i; ++j) { // Adds the same number of spaces based on n - 1
            std::cout << " ";
        }

        // Inner loop for stars
        for (int k = 1; k <= (2 * i) - 1; ++k) {
            std::cout << "*";
        }

        // Move to the next line after each row
        std::cout << std::endl;
    }

    return 0;
}


// Notes:
/*
In a pyramid pattern, each row has an odd number of stars, and the sequence of these odd numbers follows a pattern:

Row 1: 1 star (2 * 1 - 1)
Row 2: 3 stars (2 * 2 - 1)
Row 3: 5 stars (2 * 3 - 1)
Row 4: 7 stars (2 * 4 - 1)

In general, for the i-th row, the number of stars is given by 2 * i - 1.
*/