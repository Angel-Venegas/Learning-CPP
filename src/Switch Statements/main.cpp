#include <iostream>


int main() {
    // Fictional scenario: Day of the week

    // Hardcoded day for demonstration
    int day = 3; // Assume 1 represents Monday, 2 represents Tuesday, and so on

    switch (day) {
        default:
            std::cout << "Invalid day!\n";
            break;
        case 1:
            std::cout << "It's Monday!\n";
            break;
        case 2:
            std::cout << "It's Tuesday!\n";
            break;
        case 3:
            std::cout << "It's Wednesday!\n";
            break;
        case 4:
            std::cout << "It's Thursday!\n";
            break;
        case 5:
            std::cout << "It's Friday!\n";
            break;
        case 6:
            std::cout << "It's Saturday!\n";
            break;
        case 7:
            std::cout << "It's Sunday!\n";
            break;

    }

    // If break is not used it will just read all the other lines isntead after the first case match instead.
    day = 2;
    std::cout << "\n\nIf break is not used\n" << std::endl;
    switch (day) {
        case 1:
            std::cout << "It's Monday!\n";
        // Missing break statement intentionally
        case 4:
        case 2:
            std::cout << "It's Tuesday!\n";
        // Missing break statement intentionally
        case 3:
            std::cout << "It's Wednesday!\n";
            
        default:
            std::cout << "Invalid day!\n";
            
    }

    day = 6;
    std::cout << "\n\nIf break is not used and defualt is on top\n" << std::endl;
    switch (day) {
        default:
            std::cout << "Invalid day!\n";
        case 1:
            std::cout << "It's Monday!\n";
        // Missing break statement intentionally
        case 4:
        case 2:
            std::cout << "It's Tuesday!\n";
        // Missing break statement intentionally
        case 3:
            std::cout << "It's Wednesday!\n";     
    }

    return 0;
}


/*
// Note: The switch expression (value inside parentheses) must be of integer or enumeration type.
// Valid data types include int, char, enum, etc. Floating-point types, pointers, and non-integral types are not allowed.
// Does not allow strings either.

// Break in a switch statement makes it so that the code stops reading anything else after or below the break statement.
// You do not need a break statement after default since nothing is read after it in some cases.
// Cases only use equality comparisons but cannot use logical or other operators.
*/