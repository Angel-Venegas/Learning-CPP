/*
In C++, an inserter is a special kind of iterator that allows elements to be inserted into a container at a specified position.
inserter(container, iterator(position))

Types of Inserters
    Inserter	                            What it does
    std::back_inserter(container)	        Inserts at the end (good for vector, list)
    std::front_inserter(container)	        Inserts at the front (good for deque, list)
    std::inserter(container, position)	    Inserts at a specific position
*/

#include <iostream>
#include <vector>
#include <list>
#include <algorithm> // For std::copy
#include <iterator>  // For std::inserter

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec = {1, 2, 3, 4, 5};

    // Create a list of integers
    list<int> numLst = {10, 20, 30};

    auto numLstIt = numLst.begin(); // begin() function is used to return an iterator pointing to the first element
    advance(numLstIt, 1); // Move the iterator to the second position
    
    cout << "Dereferencing an iterator: "<< *numLstIt << endl << endl;
    /*
    The std::advance function modifies the iterator it is given by moving it forward (or backward if the given distance is negative) by a 
    specified number of steps. It works with all kinds of iterators, including input iterators, output iterators, forward iterators, bidirectional iterators, and random-access iterators.
    */

    copy(vec.begin(), vec.end(), inserter(numLst, numLstIt)); // An iterator is like a pointer and points to some position and can be used to traverse some container if it allows it
    // numLstIt points 1 element after lst (after 10) so it will insert all of vec's content after 10 and then pushing 20 and 30 at the end of lst.
    // Inserts all of vec's contents from 

    cout << "Elements in the list after insertion: ";
    for (const auto& elem : numLst) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
