#include <iostream>

int main() {
    int count = 0;

    // While loop
    while (count < 5) {
        std::cout << "While loop: Count is " << count << std::endl;
        ++count;
    }

    std::cout << std::endl;

    count = 0;

    do { // A do while loop ensures to enter the loop atleast once
        std::cout << "Do-While loop: Count is " << count << std::endl;
        ++count;
    } while (count < -1);


    return 0;
}


/*
while loops are used when the range is not known.

for loops are used when the range is known.
*/