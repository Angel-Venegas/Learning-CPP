#include <iostream>
#include <string>
#include <limits>


int main() {
    // Declare variables to store user input
    std::string name;
    std::string sentence;

    // Prompt the user for their name
    std::cout << "Enter your name: ";
    
    // Read a single word (sequence of characters until whitespace, ignores white space) using std::cin
    std::cin >> name;

    // Clear the input buffer to handle any remaining whitespace characters all the way up to max streamsize or when the first newline character is encountered
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Prompt the user for a sentence
    std::cout << "Enter a sentence: ";

    // Read a whole line (including whitespace) using std::getline
    std::getline(std::cin, sentence);

    // Output the user input
    std::cout << "\nName: " << name << "\n";
    std::cout << "Sentence: " << sentence << " getline discards the newline character at the end of the line but keeps any other whitespace at the end" << "\n";

    return 0;
}

/*
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  clears the input buffer up to the newline character ('\n')

cin only reads the first string excluding whitespace characters before and after that first string.

If this statement(cin.ignore) is removed and cin >> name has two strings in the same line then getline automatically reads any white space characters
after the first string read by cin hence not allowing the user to type anything when he or she clicks enter after inputing stuff in the first line.

Having cin.ignore also means that any character inputted after the first read string is just discarded and not included in getline.
*/