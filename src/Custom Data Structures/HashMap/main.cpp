#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;


template <typename KeyType, typename ValueType>
class HashMap {
    private:
        struct Entry { // Similar To Classes
            KeyType key;
            ValueType value;
            bool filled;

            Entry() : filled(false) { // Default Constructor With Initializer List
                
            }
        };

        vector<Entry> table;
        size_t size;

        size_t hash(const KeyType& key) const {
            // Create a temporary hash function object for the key type and apply it to the key.
            std::hash<KeyType> hashFunction;
            size_t hashValue = hashFunction(key);

            // Calculate the remainder after dividing the hash value by the table size.
            size_t index = hashValue % table.size();

            return index; // Return the index for the key in the table.
        }


    public:
        HashMap(size_t initialSize = 16) : table(initialSize), size(0) {}

        void insert(const KeyType& key, const ValueType& value) {
            if (size >= table.size() / 2) {
                rehash(table.size() * 2); // Rehash when the load factor exceeds 0.5
            }

            size_t index = hash(key);
            while (table[index].filled) {
                if (table[index].key == key) {
                    // Key already exists, update the value
                    table[index].value = value;
                    return;
                }
                index = (index + 1) % table.size(); // Linear probing
            }

            table[index].key = key;
            table[index].value = value;
            table[index].filled = true;
            size++;
        }

        bool get(const KeyType& key, ValueType& value) const {
            size_t index = hash(key);
            for (size_t i = 0; i < table.size(); i++) {
                if (table[index].filled && table[index].key == key) {
                    value = table[index].value;
                    return true;
                }
                index = (index + 1) % table.size();
            }
            return false;
        }

        void remove(const KeyType& key) {
            size_t index = hash(key);
            for (size_t i = 0; i < table.size(); i++) {
                if (table[index].filled && table[index].key == key) {
                    table[index].filled = false;
                    size--;
                    return;
                }
                index = (index + 1) % table.size();
            }
        }

        size_t getSize() const {
            return size;
        }

        void rehash(size_t newTableSize) {
            vector<Entry> newTable(newTableSize);
            for (const auto& entry : table) {
                if (entry.filled) {
                    size_t index = hash(entry.key);
                    while (newTable[index].filled) { // Finds an open spot to insert the entry
                        index = (index + 1) % newTableSize;
                    }
                    newTable[index] = entry;
                }
            }
            table = newTable;
        }
};



///////////////////////////////////////////////////////////////////////////////////////////
int main() {
    HashMap<string, int> myMap;

    myMap.insert("one", 1);
    myMap.insert("two", 2);
    myMap.insert("three", 3);

    int value;
    if (myMap.get("two", value)) {
        cout << "Value of key 'two': " << value << endl;
    } else {
        cout << "Key 'two' not found." << endl;
    }

    myMap.remove("three");
    cout << "Size of map: " << myMap.getSize() << endl;

    std::hash<int> hashInt; // Hash function for integers
    std::hash<std::string> hashString; // Hash function for strings

    int intValue = 42;
    std::string stringValue = "Hello, World!";

    size_t hashValueInt = hashInt(intValue);
    size_t hashValueString = hashString(stringValue);

    std::cout << "Hash Value for Integer: " << hashValueInt << std::endl;
    std::cout << "Hash Value for String: " << hashValueString << std::endl;

    return 0;
}
