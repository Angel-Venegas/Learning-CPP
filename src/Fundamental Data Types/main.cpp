// C++ is a statically typed language which means the the type of a variable is known at compile time
// since these languages require you to state the type before you can run the code.
#include <limits>
#include <iostream>
#include <cmath>

int countDigitsBeforeDecimal(double num) {
    // Count digits before the decimal point
    if (num < 1 && num > -1) {
        return 1; // Single digit before the decimal
    } else {
        return static_cast<int>(log10(std::abs(num))) + 1;
    }
}

int main() {
    // Integer types
    std::cout << "Size of int: " << sizeof(int) << " bytes (" << sizeof(int) * 8 << " bits)\n";
    std::cout << "Range of int: " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<int>::max()) << ")\n\n";

    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes (" << sizeof(unsigned int) * 8 << " bits)\n";
    std::cout << "Range of unsigned int: 0 to " << std::numeric_limits<unsigned int>::max() << "\n\n";

    std::cout << "Size of char: " << sizeof(char) << " byte (" << sizeof(char) * 8 << " bits)\n";
    std::cout << "Range of char: " << static_cast<int>(std::numeric_limits<char>::min()) << " to "
              << static_cast<int>(std::numeric_limits<char>::max())
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<char>::max()) << ")\n\n";

    std::cout << "Size of unsigned char: " << sizeof(unsigned char) << " byte (" << sizeof(unsigned char) * 8 << " bits)\n";
    std::cout << "Range of unsigned char: 0 to " << static_cast<int>(std::numeric_limits<unsigned char>::max()) << "\n\n";

    std::cout << "Size of long: " << sizeof(long) << " bytes (" << sizeof(long) * 8 << " bits)\n";
    std::cout << "Range of long: " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<long>::max()) << ")\n\n";

    std::cout << "Size of long long: " << sizeof(long long) << " bytes (" << sizeof(long long) * 8 << " bits)\n";
    std::cout << "Range of long long: " << std::numeric_limits<long long>::min() << " to "
              << std::numeric_limits<long long>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<long long>::max()) << ")\n\n";

    std::cout << "Size of short: " << sizeof(short) << " bytes (" << sizeof(short) * 8 << " bits)\n";
    std::cout << "Range of short: " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<short>::max()) << ")\n\n";

    // Floating-point types
    std::cout << "Size of float: " << sizeof(float) << " bytes (" << sizeof(float) * 8 << " bits)\n";
    std::cout << "Range of float: " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<float>::max()) << ")\n\n";

    std::cout << "Size of double: " << sizeof(double) << " bytes (" << sizeof(double) * 8 << " bits)\n";
    std::cout << "Range of double: " << std::numeric_limits<double>::lowest() << " to "
              << std::numeric_limits<double>::max()
              << " (digits before decimal: " << countDigitsBeforeDecimal(std::numeric_limits<double>::max()) << ")\n\n";

    std::cout << "Size of long double: " << sizeof(long double) << " bytes (" << sizeof(long double) * 8 << " bits)\n";
    std::cout << "Range of long double: " << std::numeric_limits<long double>::lowest() << " to "
              << std::numeric_limits<long double>::max()
              << " (digits before decimal: " << 4933 << ")\n\n";

    // Boolean type
    std::cout << "Size of bool: " << sizeof(bool) << " byte (" << sizeof(bool) * 8 << " bits)\n";
    std::cout << "Range of bool: " << std::boolalpha << false << " to " << true << "\n";

    return 0;
}


// All unsigned does it take the negative range, makes it positive, and adds it to the right and the new range starts from 0 to the new right value.
/*
std::numeric_limits<Data Type>::max();
std::numeric_limits<Data Type>::min();

Gets the largest or smallest possible value that that can be stored in a data type.

true = 1
false = 0
*/