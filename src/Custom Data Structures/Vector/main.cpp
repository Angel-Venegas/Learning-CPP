#include <iostream>
#include <stdexcept>
#include <string>
#include <typeinfo>

using namespace std;


template <typename Type>
class CustomVector {
    private:
        Type* arr;
        size_t size;
        size_t capacity;

        int resize() {
            return capacity *= 2;
        }

        void reinitialize() {
            for (size_t i = 0; i < capacity; ++i)
                arr[i] = Type();  // Default initialize with Type's default constructor
        }


    public:
        CustomVector() : arr(nullptr), size(0), capacity(0) {}

        ~CustomVector() {
            delete[] arr;
        }

        void destroy_vector() {
            delete[] arr;
        }

        Type& operator[](size_t index) {  // Is called when you use the subscript operator [] to access elements of an instance of the CustomVector class.
            if (index >= capacity) // Check if index is between 0 and size - 1
                cout << "Index out of range" << endl;

            return arr[index];
        }

        Type& get(int index) {
            return arr[index];
        } 

        void set(size_t index, Type val) {
            if (size == 0 && index == 0) {
                size++;
                arr[index] = val;
            }
            else if (index < 0 || index >= size)
                cout << "Index out of range" << endl;
        }

        void remove(const Type& value) {
            size_t foundIndex = -1; // Initialize to an invalid index
            for (size_t i = 0; i < size; i++) {
                if (arr[i] == value) {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex != -1) {
                for (size_t i = foundIndex; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            }
        }

        void push_back(const Type& value) {
            if (size >= capacity) {
                capacity = (capacity == 0) ? 1 : resize();
                Type* newData = new Type[capacity];
                
                for (size_t i = 0; i < size; i++)
                    newData[i] = arr[i];

                delete[] arr;
                arr = newData;
            }

            arr[size] = value;
            size++;
        }

        Type& pop_back() {
            if (size == 0) {
                cout << "Vector is empty" << endl;
                throw runtime_error("Vector is empty");
            }
            else
                return arr[size-- - 1];
        }

        Type pop_front() {
            if (size == 0) {
                throw logic_error("Vector is empty");
            }

            Type frontElement = arr[0];
            for (size_t i = 0; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;

            return frontElement;
        }

        void clear() { // Removes all elements in the array but the capacity remains the same
            size = 0;
            delete[] arr;
            arr = new Type[capacity];
        }


        bool is_empty() const {
            return size == 0;
        }

        Type& front() { // Returns the first element
            if (size == 0)
                cout << "Vector is empty" << endl;
            else
                return arr[0];
        }

        Type& back() { // Returns the last element
            if (size == 0)
                cout << "Vector is empty" << endl;

            return arr[size - 1];
        }

        size_t get_size() const {
            return size;
        }

        size_t get_capacity() const {
            return capacity;
        }

        void print() {
            for (size_t i = 0; i < size; ++i)
                cout << *(arr + i) << " ";

            cout << endl;
        }
};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    CustomVector<int> myVector;

    for (int i = 0; i <= 7; i++)
        myVector.push_back(i);

    cout << "Elements in the vector:" << endl;
    myVector.print();

    cout << "\nSize: " << myVector.get_size() << endl;
    cout << "Capacity: " << myVector.get_capacity() << endl << endl;

    myVector.clear();
    cout << "Vector cleared." << endl;
    cout << "Capacity: " << myVector.get_capacity() << " Size: " << myVector.get_size() << endl << endl;

    myVector.set(0, 3);
    cout << "Element at index 0 set to 3." << endl;
    cout << "Capacity: " << myVector.get_capacity() << " Size: " << myVector.get_size() << endl << endl;

    cout << "Element at index 0: " << myVector.get(0) << endl;

    try {
        int poppedValue = myVector.pop_back();
        cout << "Popped value: " << poppedValue << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    for (int i = 0; i < 5; i++)
        myVector.push_back(i);

    cout << "\nElements in the vector:" << endl;
    myVector.print();

    int frontElement = myVector.pop_front();
    cout << "Popped front element: " << frontElement << endl;

    cout << "\nElements in the vector after popping front:" << endl;
    myVector.print();

    myVector.remove(3);
    cout << "\nElement 3 removed from the vector:" << endl;
    myVector.print();

    return 0;
}
