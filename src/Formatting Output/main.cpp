#include <iostream>
#include <iomanip> // Required for std::setw and std::setprecision

int main() {
    // Line to separate sections
    std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    // Integer formatting
    std::cout << "Integer (%Int)(sign - or )width(d) (- left aligns and ( ) right aligns the output):\n"; // Right aligned by default
    std::cout << "Width = If the integer is more than the width, nothing happens; if less, spaces are added to left(-) or right( ) of the integer:\n";
    std::printf("Default Integer Format(Exact Digits):[%d]\n", 1234);
    std::printf("Integer Format Width 2:[%2d]\n", 1234);
    std::printf("Integer Format Width 5:[%5d]\n", 1234);
    std::printf("Integer Format Width -7:[%-7d]", 1234);

    // Line to separate sections
    std::cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    // String formatting
    std::cout << "String (%Int)+-width.precision(s) (- left aligns and ( ) right aligns the output):\n";
    std::cout << "Precision = If the string is bigger than width, nothing happens; if less, string gets padded with spaces to the left to match the width:\n";
    std::cout << "Width(Applies After Precision)\n"; // Width is a set size for the stream of chareacters but only changes are applied when the stream is smaller than the width
    std::printf("Default String Format(Exact Digits):[%s]\n", "1234");
    std::printf("String Format Width 2:[%2s]\n", "1234");
    std::printf("String Format Width 5:[%5s]\n", "1234");
    std::printf("String Format Width -7:[%-7s]\n", "1234");
    std::printf("String Format Width 5.2(precision):[%5.2s]\n", "1234");

    // Line to separate sections
    std::cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";

    // Double formatting
    std::cout << "Double (%)+-width.precision(f) (- left aligns and ( ) right aligns the output):\n";
    std::cout << "Precision = Only Applies To The Double's Decimals, Ranges From 0 or More\n";
    std::cout << "Width(Applies After Precision, Every Character Counts For The Width, Even The Decimal) = If the string is more than the width, nothing happens; if less, (width - string length = # spaces to left( ) or right (-) of string:\n";
    std::printf("Default Double Format(Exact Digits):[%f]\n", 1234.00);
    std::printf("Double Format Width 1.2:[%1.2f]\n", 1234.00);
    std::printf("Double Format Width 10.3:[%10.2f]\n", 1234.00);
    std::printf("Double Format Width -8.2:[%-8.2f]", 1234.00);

    return 0;
}
