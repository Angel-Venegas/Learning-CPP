/*
Introduction To Iterators:
https://www.geeksforgeeks.org/introduction-iterators-c/


Input Iterators: They are the weakest of all the iterators and have very limited functionality. They can only be used in a single-pass algorithms, i.e., those algorithms which process the container sequentially, such that no element is accessed more than once.
Output Iterators: Just like input iterators, they are also very limited in their functionality and can only be used in single-pass algorithm, but not for accessing elements, but for being assigned elements.
Forward Iterator: They are higher in the hierarchy than input and output iterators, and contain all the features present in these two iterators. But, as the name suggests, they also can only move in a forward direction and that too one step at a time.
Bidirectional Iterators: They have all the features of forward iterators along with the fact that they overcome the drawback of forward iterators, as they can move in both the directions, that is why their name is bidirectional.
Random-Access Iterators: They are the most powerful iterators. They are not limited to moving sequentially, as their name suggests, they can randomly access any element inside the container. They are the ones whose functionality are same as pointers.
*/

/*
CONTAINER                TYPES OF ITERATOR SUPPORTED
------------------------------------------------------
Vector                   Random-Access
List                     Bidirectional
Deque                    Random-Access
Map                      Bidirectional
Multimap                 Bidirectional
Set                      Bidirectional
Multiset                 Bidirectional
Stack                    No iterator Supported
Queue                    No iterator Supported
Priority-Queue           No iterator Supported
*/



#include <iostream>
#include <list>
#include <iterator>
#include <type_traits>

using namespace std;

template <typename Iterator>
void print_iterator_category(Iterator it) {
    if (typeid(typename iterator_traits<Iterator>::iterator_category) == typeid(random_access_iterator_tag)) {
        cout << "Random-Access Iterator" << endl;
    } else if (typeid(typename iterator_traits<Iterator>::iterator_category) == typeid(bidirectional_iterator_tag)) {
        cout << "Bidirectional Iterator" << endl;
    } else if (typeid(typename iterator_traits<Iterator>::iterator_category) == typeid(forward_iterator_tag)) {
        cout << "Forward Iterator" << endl;
    } else if (typeid(typename iterator_traits<Iterator>::iterator_category) == typeid(input_iterator_tag)) {
        cout << "Input Iterator" << endl;
    } else if (typeid(typename iterator_traits<Iterator>::iterator_category) == typeid(output_iterator_tag)) {
        cout << "Output Iterator" << endl;
    } else {
        cout << "Unknown Iterator Category" << endl;
    }
}

int main() {
    list<string> linked_list;

    linked_list.push_back("First");
    linked_list.push_back("Second");
    linked_list.push_back("Third");
    linked_list.push_back("Fourth");

    list<string>::iterator iterator = linked_list.begin();

    cout << "Iterator category: ";
    print_iterator_category(iterator);

    return 0;
}
