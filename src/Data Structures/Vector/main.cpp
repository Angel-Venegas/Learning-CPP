#include <vector>
#include <iostream>

int main() {
    // (constructor) constructs the vector
    std::vector<int> myVector;

    // push_back adds an element to the end
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // operator[] access specified element
    std::cout << "Element at index 1: " << myVector[1] << std::endl;

    // front access the first element
    std::cout << "First element: " << myVector.front() << std::endl;

    // back access the last element
    std::cout << "Last element: " << myVector.back() << std::endl;

    // size returns the number of elements
    std::cout << "Size of vector: " << myVector.size() << std::endl;

    // reserve reserves storage
    myVector.reserve(10);

    // capacity returns the number of elements that can be held in currently allocated storage
    std::cout << "Capacity of vector: " << myVector.capacity() << std::endl;

    // clear clears the contents
    myVector.clear();

    // empty checks whether the container is empty
    if (myVector.empty()) {
        std::cout << "Vector is empty." << std::endl;
    }

    // insert inserts elements
    myVector.insert(myVector.begin(), 100);
    myVector.insert(myVector.end(), 200);

    // Print the current elements using an iterator
    std::cout << "Current Elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // erase erases elements
    myVector.erase(myVector.begin());

    // Print the elements after erasing using an iterator
    std::cout << "After Erase Elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // resize changes the number of elements stored
    myVector.resize(3);

    // swap swaps the contents
    std::vector<int> anotherVector = {1, 2, 3};
    myVector.swap(anotherVector);

    // emplace_back constructs an element in-place at the end
    myVector.emplace_back(40);

    // assign assigns values to the container
    myVector.assign(5, 50);

    // max_size returns the maximum possible number of elements
    std::cout << "Max size of vector: " << myVector.max_size() << std::endl;

    // pop_back removes the last element
    myVector.pop_back();

    // resize changes the number of elements stored
    myVector.resize(5);

    // emplace constructs an element in-place
    myVector.emplace(myVector.begin() + 2, 60);

    // Iterate through the vector and print its elements
    std::cout << "Vector elements: ";
    for (const auto& element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
