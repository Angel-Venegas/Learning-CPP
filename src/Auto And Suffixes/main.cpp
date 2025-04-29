#include <iostream>


int main() {
    // Using auto and suffixes for different numeric literals

    // Integer literals
    auto integerDecimal = 42;         // Auto-deduced as int
    auto integerOctal = 052;          // Octal literal, auto-deduced as int
    auto integerHexadecimal = 0x2A;   // Hexadecimal literal, auto-deduced as int
    auto integerBinary = 0b101010;    // Binary literal, auto-deduced as int

    // Floating-point literals
    auto floatingPoint = 3.14;        // Auto-deduced as double
    auto floatingPointSuffixF = 3.14f; // Float literal
    auto floatingPointSuffixL = 3.14l; // Long double literal

    // Character literals
    auto characterLiteral = 'A';      // Auto-deduced as char
    auto wideCharacterLiteral = L'B';  // Wide character literal, auto-deduced as wchar_t

    // String literals
    auto stringLiteral = "Hello, World!";       // Auto-deduced as const char*
    auto wideStringLiteral = L"Wide String";    // Wide string literal, auto-deduced as const wchar_t*

    // Boolean literals
    auto trueLiteral = true;  // Auto-deduced as bool
    auto falseLiteral = false; // Auto-deduced as bool

    // Display the values
    std::cout << "Integer Literals:\n";
    std::cout << "Decimal: " << integerDecimal << "\n";
    std::cout << "Octal: " << integerOctal << "\n";
    std::cout << "Hexadecimal: " << integerHexadecimal << "\n";
    std::cout << "Binary: " << integerBinary << "\n";

    std::cout << "\nFloating-Point Literals:\n";
    std::cout << "Default: " << floatingPoint << "\n";
    std::cout << "Float Suffix: " << floatingPointSuffixF << "\n";
    std::cout << "Long Double Suffix: " << floatingPointSuffixL << "\n";

    std::cout << "\nCharacter Literals:\n";
    std::cout << "Char: " << characterLiteral << "\n";
    std::wcout << "Wide Char: " << wideCharacterLiteral << L"\n";

    std::cout << "\nString Literals:\n";
    std::cout << "String: " << stringLiteral << "\n";
    std::wcout << "Wide String: " << wideStringLiteral << L"\n";

    std::cout << "\nBoolean Literals:\n";
    std::cout << "True: " << trueLiteral << "\n";
    std::cout << "False: " << falseLiteral << "\n\n";


    auto notDynamicType = "string";

    std::cout << "Type: " << notDynamicType << "\n";
    // notDynamicType = 5.87; // Gives in error since autpo uses type inference and sets a type based on the firsrt value it is assigned and cannot change types after.
    // std::cout << "Type: " << notDynamicType << "\n"; 

    return 0;
}


/*
Prefixes: They are basically represent in four types.

Decimal-literal(base 10):- a non-zero decimal digit followed by zero or more decimal digits(0, 1, 2, 3, 4, 5, 6, 7, 8, 9). For example, 56, 78.
Octal-literal(base 8):- a zero followed by zero or more octal digits(0, 1, 2, 3, 4, 5, 6, 7). For example, 045, 076, 06210.
Hex-literal(base 16):- 0x or 0X followed by one or more hexadecimal digits(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, A, b, B, c, C, d, D, e, E, f, F). For example, 0x23A, 0Xb4C, 0xFEA.
Binary-literal(base 2):- 0b or 0B followed by one or more binary digits(0, 1). For example, 0b101, 0B111.
Suffixes: They are represented in many ways according to their data types.
int:- No suffix are required because integer constant are by default assigned as int data type.
unsigned int: character u or U at the end of integer constant.
long int: character l or L at the end of integer constant.
unsigned long int: character ul or UL at the end of integer constant.
long long int: character ll or LL at the end of integer constant.
unsigned long long int: character ull or ULL at the end of integer constant.
*/