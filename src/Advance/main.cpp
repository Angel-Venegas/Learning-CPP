/*
void advance (InputIterator& it, Distance n);

it : Iterator to be advanced
n : Number of element positions to advance.
This shall only be negative for random-access and bidirectional iterators
*/

#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;


int main() {
    list<string> linked_list;

    linked_list.push_back("First");
    linked_list.push_back("Second");
    linked_list.push_back("Third");
    linked_list.push_back("Fourth");

    for (string item : linked_list) {
        cout << item << " ";
    }

    cout << endl << endl;

    auto iterator = linked_list.begin();

    advance(iterator, 2); // Advance two places after the current position

    cout << "Advance two places after the current position: " << *iterator << endl << endl;;

    for (string item : linked_list)
        cout << item << " ";

    cout << endl << endl;

    advance(iterator, -1); // Advance one place before the current postion

    cout << "Advance one place before the current postion: " << *iterator << endl << endl;

    for (auto it = iterator; it != linked_list.end(); ++it)
        cout << *it << " ";

    cout << endl;

    return 0;
}
