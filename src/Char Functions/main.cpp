#include <iostream>
#include <cctype> // Include cctype for character functions

using namespace std;

int main() {
    char ch = '1';

    // Check if the character is alphabetic (a-Z)
    if (isalpha(ch)) {
        cout << ch << " is an alphabetic character." << endl;
    } else {
        cout << ch << " is not an alphabetic character." << endl;
    }

    // Check if the character is a digit, 0-9 only
    if (isdigit(ch)) {
        cout << ch << " is a digit." << endl;
    } else {
        cout << ch << " is not a digit." << endl;
    }

    // Check if the character is lowercase
    if (islower(ch)) {
        cout << ch << " is a lowercase letter." << endl;
    } else {
        cout << ch << " is not a lowercase letter." << endl;
    }

    // Check if the character is uppercase
    if (isupper(ch)) {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an uppercase letter." << endl;
    }

    // Convert the character to lowercase
    char lowerCh = tolower(ch);
    cout << "Lowercase version of " << ch << " is " << lowerCh << "." << endl;

    // Convert the character to uppercase
    char upperCh = toupper(ch);
    cout << "Uppercase version of " << ch << " is " << upperCh << "." << endl;

    // Check if the character is a whitespace character
    if (isspace(ch)) {
        cout << ch << " is a whitespace character." << endl;
    } else {
        cout << ch << " is not a whitespace character." << endl;
    }

    // Check if the character is a control character
    if (iscntrl(ch)) {
        cout << ch << " is a control character." << endl;
    } else {
        cout << ch << " is not a control character." << endl;
    }

    // Check if the character is a punctuation character
    if (ispunct(ch)) {
        cout << ch << " is a punctuation character." << endl;
    } else {
        cout << ch << " is not a punctuation character." << endl;
    }

    // Check if the character is a printable character
    if (isprint(ch)) {
        cout << ch << " is a printable character." << endl;
    } else {
        cout << ch << " is not a printable character." << endl;
    }

    // Check if the character is a hexadecimal digit
    if (isxdigit(ch)) {
        cout << ch << " is a hexadecimal digit." << endl;
    } else {
        cout << ch << " is not a hexadecimal digit." << endl;
    }

    return 0;
}