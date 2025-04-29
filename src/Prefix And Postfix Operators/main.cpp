#include <iostream>


int main() {
    int x = 5;
    int y;

    // Prefix increment (++x)
    y = ++x;  // Increment x first, then assign to y
    std::cout << "Prefix Increment: x = " << x << ", y = " << y << std::endl;

    // Prefix decrement (--x)
    y = --x;  // Decrement x first, then assign to y
    std::cout << "Prefix Decrement: x = " << x << ", y = " << y << std::endl;

    // Postfix increment (x++)
    y = x++;  // Assign x to y first, then increment x
    std::cout << "Postfix Increment: x = " << x << ", y = " << y << std::endl;

    // Postfix decrement (x--)
    y = x--;  // Assign x to y first, then decrement x
    std::cout << "Postfix Decrement: x = " << x << ", y = " << y << std::endl;

    // Alternative notations for increment and decrement
    x += 2;   // Equivalent to x = x + 2
    std::cout << "Alternative Increment: x = " << x << std::endl;

    x -= 2;   // Equivalent to x = x - 2
    std::cout << "Alternative Decrement: x = " << x << std::endl;

    return 0;
}

/*
Prefix Increment (++x):
Increments the value of x before its value is used in the expression.


Prefix Decrement (--x):
Decrements the value of x before its value is used in the expression.


Postfix Increment (x++):
Uses the current value of x in the expression and then increments x afterward.


Postfix Decrement (x--):
Uses the current value of x in the expression and then decrements x 
*/