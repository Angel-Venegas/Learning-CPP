#include <iostream>
#include <stack>
#include <vector>


void pushRange() {
    std::stack<int, std::deque<int, std::allocator<int>>> myStack;

    // Populate the stack initially with 10 items
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Pushing " << i << " onto the stack." << std::endl;
        myStack.push(i);
    }

    std::cout << "\nStack size after initial population: " << myStack.size() << std::endl;

    // Use emplace() to add elements directly to the stack
    std::cout << "\nEmplacing elements onto the stack." << std::endl;
    myStack.emplace(60);
    myStack.emplace(70);

    std::cout << "\nStack size after emplace(): " << myStack.size() << std::endl;

    // Push elements from a vector onto the stack using a loop
    std::vector<int> myVector = {30, 40, 50};
    std::cout << "\nPushing elements from a vector onto the stack using a loop." << std::endl;
    for (const auto &element : myVector) {
        std::cout << "Pushing " << element << " onto the stack." << std::endl;
        myStack.push(element);
    }

    std::cout << "\nStack size after pushing elements from the vector: " << myStack.size() << std::endl;

    // Display the final items in the stack
    std::cout << "\nFinal items in the stack:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    std::cout << "\nStack size after popping all items: " << myStack.size() << std::endl;
}


int main() {
    std::stack<int> myStack;

    // Populate the stack initially with 10 items
    for (int i = 1; i <= 10; ++i) {
        std::cout << "Pushing " << i << " onto the stack." << std::endl;
        myStack.push(i);
    }

    std::cout << "\nStack size after initial population: " << myStack.size() << std::endl;

    // Use the swap() operation to exchange the contents of two stacks
    std::stack<int> anotherStack;
    anotherStack.push(100);
    anotherStack.push(200);
    std::cout << "\nSwapping contents with another stack." << std::endl;
    myStack.swap(anotherStack);

    // Display the contents of the swapped stacks
    std::cout << "\nContents of the original stack after swap:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    std::cout << "\nContents of the new stack after swap:" << std::endl;
    while (!anotherStack.empty()) {
        std::cout << anotherStack.top() << " ";
        anotherStack.pop();
    }

    // Use emplace() to add elements directly to the stack
    std::cout << "\nEmplacing elements onto the stack." << std::endl;
    myStack.emplace(60);
    myStack.emplace(70);

    std::cout << "\nStack size after emplace(): " << myStack.size() << std::endl;

    // Display the final items in the stack
    std::cout << "\nFinal items in the stack:" << std::endl;
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }

    std::cout << "\nStack size after popping all items: " << myStack.size() << std::endl << std::endl << std::endl;

    std::cout << "Using Push Range:" << std::endl;
    pushRange();

    return 0;
}


// Notes:
/*

*/