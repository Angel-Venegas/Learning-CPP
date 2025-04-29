#include <iostream>
#include <vector>
#include <algorithm> // Include the header for std::copy

using namespace std;

/*
In C++, an inserter is basically an object that helps insert elements into a container (like a vector, list, set, etc.) while you are copying or modifying things.

You usually use an inserter with functions like std::copy, std::transform, or any algorithm that expects an "output iterator."
*/
int main() {
    vector<int> src = {1, 2, 3, 4, 5};

    vector<int> dest(src.size()); // This will initialize a vector with size 5 and 5 empty 0's

    copy(src.begin(), src.end(), inserter(dest, dest.begin()));

    cout << "\nElements in the destination vector: ";
    for (int elem : dest) {
        cout << elem << " ";
    }
    cout << endl << endl << endl;

    return 0;
}