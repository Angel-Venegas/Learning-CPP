#include <iostream>
#include <functional> // for hash<class template> class
#include <string>
#include <vector>
#include <bitset>
 
using namespace std;


// To demonstrate String Hashing
void stringHashing()
{
 
    // Get the string
    // to get its hash value
    string hashing1 = "Geeks";
 
    // Instantiation of Object
    hash<string> mystdhash;
 
    // Using operator() to get hash value
    cout << "String hash values: "
         << mystdhash(hashing1)
         << endl;
}
 
// To demonstrate BITSET Hashing
void bitsetHashing()
{
 
    // Get the BITSET
    // to get its hash value
    bitset<5> h_bitset("10101");
 
    // Instantiation of Object
    hash<bitset<5> > hash_bitset;
 
    // Using operator() to get hash value
    cout << "\nBitset 10101 hash value: "
         << hash_bitset(h_bitset) << endl;
}
 
// To demonstrate Vector<bool> Hashing
void vectorHashing()
{
 
    // Get the Vector<bool>
    // to get its hash value
    vector<bool>
        h_vecbool{ true, false,
                   true, false };
 
    // Instantiation of Object
    hash<vector<bool> > hash_vector_bool;
 
    // Using operator() to get hash value
    cout << "\nVector<bool> hash value: "
         << hash_vector_bool(h_vecbool)
         << endl;
}
 
// To demonstrate Char Hashing
void charHashing()
{
 
    // Get the char
    // to get its hash value
    char ch = 'a';
 
    // Instantiation of Object
    hash<char> hash_char;
 
    // Using operator() to get hash value
    cout << "\nChar hash values: "
         << hash_char(ch)
         << endl;
}


//////////////////////////////////////////////////////////////////////////////
int main() {
    int key = 453; // Key you want to hash
    std::hash<int> hashFunction; // Create a hash function object for int

    size_t hashValue = hashFunction(key); // Apply the hash function to the key
    std::cout << "Hash Value: " << hashValue << std::endl << std::endl;


    stringHashing();
    bitsetHashing();
    vectorHashing();
    charHashing();

    return 0;
}


/*
std::hash is a built-in feature in C++ provided by the C++ Standard Library. It's a template 
class that's designed to generate hash values for various data types. You can use it for 
common data types like integers, strings, and custom types if you specialize the template for your type.


hash<string> mystdhash;
cout << "String hash values: " << mystdhash(hashing1) << endl;

hash<string> is not calling a parameterized constructor explicitly. It's creating an object of type std::hash<string> using the default constructor.

std::hash is a functor (a class that defines operator()) that can be used as a function object for calculating hash values. When you write 
mystdhash(hashing1), you're actually invoking the operator() of the mystdhash object, which calculates the hash value of the hashing1 string.

So, in this case, mystdhash(hashing1) is using the operator() of the std::hash<string> object to compute the hash value of the string hashing1. 
It's not a parameterized constructor call; it's calling the operator() function provided by the std::hash object.
*/