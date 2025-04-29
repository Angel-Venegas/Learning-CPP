#include <iostream>
#include <set>
#include <algorithm>  // Add this header for set_union, set_intersection, set_difference

using namespace std;

int main() {
    // Creating two ordered sets
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};

    // Displaying the original sets
    cout << "Set 1: ";
    for (const auto& element : set1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Set 2: ";
    for (const auto& element : set2) {
        cout << element << " ";
    }
    cout << endl;

    // Union of set1 and set2
    set<int> unionSet;
    set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(unionSet, unionSet.begin()));

    // Intersection of set1 and set2
    set<int> intersectionSet;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersectionSet, intersectionSet.begin()));

    // Difference of set1 and set2
    set<int> differenceSet;
    set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(differenceSet, differenceSet.begin()));

    // Displaying the results
    cout << "Union: ";
    for (const auto& element : unionSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (const auto& element : intersectionSet) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Difference (Set1 - Set2): ";
    for (const auto& element : differenceSet) {
        cout << element << " ";
    }
    cout << endl;

    // Inserting elements into set1
    set1.insert(6);
    set1.insert(7);

    cout << "Set 1 after insertions: ";
    for (const auto& element : set1) {
        cout << element << " ";
    }
    cout << endl;

    // Erasing elements from set2
    set2.erase(6);

    cout << "Set 2 after erasing element 6: ";
    for (const auto& element : set2) {
        cout << element << " ";
    }
    cout << endl;

    // Counting occurrences of elements in set1
    cout << "Count of 4 in Set 1: " << set1.count(4) << endl;

    // Clearing the sets
    set1.clear();
    set2.clear();

    cout << "Set 1 after clearing: ";
    for (const auto& element : set1) {
        cout << element << " ";
    }
    cout << endl;

    cout << "Set 2 after clearing: ";
    for (const auto& element : set2) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}


/*
Notes:
The primary difference between a `std::set` and `std::unordered_set` in C++ lies in the way elements are stored and the performance 
characteristics of various operations.

1. **Ordering:**
   - **`std::set`:** Maintains elements in sorted order (ascending by default). This means that elements are internally stored in a 
   balanced binary search tree (usually a red-black tree), which allows for logarithmic time complexity for operations like insertion, 
   deletion, and search.
   - **`std::unordered_set`:** Does not maintain any specific order among elements. Elements are hashed and stored in buckets. 
   This data structure provides constant-time average complexity for insertion, deletion, and search operations.

2. **Performance:**
   - **`std::set`:** Provides logarithmic time complexity (O(log n)) for insertion, deletion, and search operations, 
   where 'n' is the number of elements.
   - **`std::unordered_set`:** Provides constant time average complexity (O(1)) for insertion, deletion, and search operations. 
   However, in the worst case, when there are hash collisions, the complexity may degrade to O(n), where 'n' is the number of elements in a bucket.

3. **Implementation:**
   - **`std::set`:** Typically implemented as a balanced binary search tree.
   - **`std::unordered_set`:** Typically implemented as a hash table.

4. **Iterators:**
   - **`std::set`:** Iterators traverse elements in sorted order.
   - **`std::unordered_set`:** Iterators do not follow any specific order.

5. **Use Cases:**
   - **`std::set`:** Useful when you need to maintain elements in sorted order or when you need operations with 
   logarithmic time complexity. It's a good choice for scenarios where the order of elements matters.
   - **`std::unordered_set`:** Useful when you need fast average-case constant-time operations and the order 
   of elements is not important. It's a good choice when the focus is on efficient lookups rather than maintaining a specific order.

Choose between `std::set` and `std::unordered_set` based on the specific requirements of your application. 
If you need a sorted collection with ordered traversal, use `std::set`. If you need fast unordered lookups 
and don't care about the order, use `std::unordered_set`.
*/