#include <iostream>

using namespace std;


// Class Naming Convention
class Person {
    // Class body...
};

// Function Naming Convention
void calculateTotal() {
    // Function body...
}


int main() {
    int file_size;      // Snake Case
    int FileSize;       // Pascal Case (not commonly used for variables)
    int fileSize;       // Camel Case
    int iFileSize;      // Hungarian Notation (not as common in modern C++), i is the variable's type which is int

    // Constants
    const int MAX_SIZE = 100;

    // Enumeration Constants
    enum Color {
        RED,
        GREEN,
        BLUE
    };

    // Comments
    // Use comments to explain the purpose of code
    // or to provide additional information.

    // Indentation and Formatting
    if (fileSize > 0) {
        std::cout << "File size is positive." << std::endl;
    } else {
        std::cout << "File size is non-positive." << std::endl;
    }

    // File Naming
    // Choose meaningful names for your source and header files.
    // For example: main.cpp, utility_functions.hpp


    // This first example uses Magic Numbers which are hardcoded numbers with no clear meaning or context
    cout << "\nCalculating Sales Tax:\n";
    cout << 95000 * (0.04 + 0.02) << endl << endl;

    // This second example is better since it uses variables
    cout << "Calculating Sales Tax (The Better Convention):\n";
    const int sales = 95000;
    const double stateTaxRate = 0.04; // What if the state tax changes? We do not have to modify it in many parts of the code.
    const double countyTaxRate = 0.02;

    cout << sales * (stateTaxRate + countyTaxRate);

    return 0;
}


/*
Standard Output Stream:
Standard Output - Is the console or terminal window.
Stream - A sequence of characters.

<< (Stream Insertion Operator) - For inserting something in the output stream. To write data to a stream.
You can chain the Insertion Operator like this,
std::cout << a << " " << b << std::endl;


>> (Stream Exactrion Operator) - For reading data from the standard input and in some cases the console and inserting it into some variable.
To read data from a stream.
cin >> value >> otherVal; You can also chain using the Extraction Operator

using namespace std; - Picks up the std namespace so that it can be used anywhere in the file.
*/