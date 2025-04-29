#include <iostream>

int main() {
    // Print ASCII values and meanings of characters
    for (int i = 32; i <= 126; ++i) {
        char character = static_cast<char>(i);
        std::cout << "ASCII Value: " << i << "\t Character: " << character << "\t Meaning: ";

        // Add interesting facts or descriptions for certain characters
        switch (i) {
            case 32: std::cout << "Space"; break;
            case 33: std::cout << "Exclamation Mark"; break;
            case 34: std::cout << "Double Quote"; break;
            case 44: std::cout << "Comma"; break;
            case 46: std::cout << "Period"; break;
            case 63: std::cout << "Question Mark"; break;
            default: std::cout << "Other";
        }

        // Add some fun facts or trivia
        if (i % 10 == 0) {
            std::cout << " - Fun Fact: ASCII value is a multiple of 10!";
        }

        std::cout << std::endl;
    }

    // Print Boolean values and their meanings
    std::cout << "\nBoolean Values and Meanings:\n";
    std::cout << std::boolalpha << false << "\t Meaning: Absence of truth or " << std::noboolalpha << false << std::endl;
    std::cout << std::boolalpha << true << "\t Meaning: Presence of truth or " << std::noboolalpha << true << std::endl;
    // By defualt the boolean will either print 0 or 1

    return 0;
}
