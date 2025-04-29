#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    unordered_set<int> sampleSet;

    // Inserting elements
    sampleSet.insert(5);
    sampleSet.insert(10);
    sampleSet.insert(15);
    sampleSet.insert(20);
    sampleSet.insert(25);

    // displaying all elements of sampleSet
    cout << "sampleSet contains: ";
    int count = 0;  // Initialize count to 0
    for (auto itr = sampleSet.begin(); itr != sampleSet.end(); itr++) {
        cout << *itr << " ";
        count++;  // Increment the count
    }

    // checking if element 20 is present in the set
    if (sampleSet.count(20) == 1) {
        cout << "\nElement 20 is present in the set";
    }
    else {
        cout << "\nElement 20 is not present in the set";
    }

    // Display the final count
    cout << "\nFinal count: " << count << endl;

    return 0;
}


// Link: https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/