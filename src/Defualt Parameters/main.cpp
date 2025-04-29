#include <iostream>

using namespace std;


int add(int a, int b = 3) {
    return a + b;
}

int main() {
    cout << add(2, 4) << endl;
    cout << add(2) << endl;
    
    return 0;
}