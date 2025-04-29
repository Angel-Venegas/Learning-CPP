#include <iostream>
#include <vector>
#include <algorithm> // Include the header for std::copy

using namespace std;

int main() {
    // Source vector
    vector<int> src = {1, 2, 3, 4, 5};

    // Destination vector with enough space to hold the copied elements
    vector<int> dest(src.size() + 1);

    // Copy elements from src to dest
    // Syntax std::copy,  OutputIterator d_first = copy(InputIterator first, InputIterator last, OutputIterator d_first);
    /*
    template< class InputIt, class OutputIt >
    OutputIt copy( InputIt first, InputIt last,
               OutputIt d_first );
    */

    // copy(src.begin(), src.end(), dest.end()); // Produces 0 0 0 0

    copy(src.begin(), src.end(), dest.begin());
    //copy(src.end(), src.begin(), dest.end()); cannot do it this way since it does not follow the syntax

    dest.push_back(7); // Can still append elements even after declaring a size

    cout << "\nElements in the destination vector: ";
    for (int elem : dest) {
        cout << elem << " ";
    }
    cout << endl << endl << endl;

    return 0;
}