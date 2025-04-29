#include <iostream>
#include <vector>

int main() {
    // Example with a traditional array
    const int arraySize = 5;
    int numbers[arraySize] = {1, 2, 3, 4, 5};

    // Accessing elements in bounds
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    // Accessing elements out of bounds (undefined behavior)
    std::cout << "\nAccessing element out of bounds for an array: " << numbers[arraySize + 2] << std::endl << std::endl;

    // Example with bounds checking using std::vector
    std::vector<int> numbersVector{1, 2, 3, 4, 5};

    // Accessing elements in bounds
    for (size_t i = 0; i < numbersVector.size(); ++i) {
        std::cout << "Element at index " << i << ": " << numbersVector[i] << std::endl;
    }

    // Accessing elements with bounds checking
    size_t indexToAccess = 10;
    if (indexToAccess < numbersVector.size()) {
        std::cout << "Element at index " << indexToAccess << ": " << numbersVector[indexToAccess] << std::endl;
    } else {
        std::cout << "Index " << indexToAccess << " is out of bounds." << std::endl;
    }

    std::cout << "\nAccessing element out of bounds for a vector: " << numbersVector[indexToAccess] << std::endl << std::endl;

    return 0;
}


// C++ assumes the programmer knows what he or she is doing and does not provide array bound checking. It actually lets you access something out
// of bounds but may lead to undefined behavior.