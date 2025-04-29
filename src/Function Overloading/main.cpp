#include <iostream>
#include <string>

using namespace std;


void speak(string a) {
    cout << "HELLO" << endl;
}

void speak(string a, int b) {
    cout << "HI " << b << endl;
}


int main() {
    speak("a");
    speak("a", 3);

    return 0;
}

/*
Function overloading is when two or more functions have the same name but different parameters or parameter types.
The function on which has to be chosen is done at compile time.

*/