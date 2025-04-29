#include <iostream>

// Function to iterate over an integer array and print its elements
void printIntArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}

// Function to iterate over a double array and print its elements
void printDoubleArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}


int main() {
    const int intArray[] = {1, 2, 3, 4, 5};
    const double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // Using a for loop to iterate over the integer array
    std::cout << "Integer Array: ";
    printIntArray(intArray, sizeof(intArray) / sizeof(int));

    // Using a for loop to iterate over the double array
    std::cout << "Double Array: ";
    printDoubleArray(doubleArray, sizeof(doubleArray) / sizeof(double));

    // Infinite loop with a condition to break
    for (;;) {
        char userInput;
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> userInput;

        if (userInput == 'n') {
            // Break out of the infinite loop when the user enters 'n'
            break;
        } else {
            // Continue the loop for any other input
            std::cout << "Let's continue!\n";
        }
    }


    std::cout << "\n\n";
    int setSizeArray[10] = {1, 2, 3, 4, 5};

    for (int n : setSizeArray)
        std::cout << n << "->";

    std::cout << "\n\n";

    for (std::size_t i = 0; i < sizeof(setSizeArray) / sizeof(setSizeArray[0]); ++i)
        std::cout << setSizeArray[i] << "->";

    
    return 0;
}
