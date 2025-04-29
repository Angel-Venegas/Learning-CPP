#include <iostream>

using namespace std;


//---Runtime Polymorphism--------------------------------------------------------------------------------------------Start
class Animal { // Animal is the base class (Superclass)
    public:
        //virtual int num; // Not allowed for data members only member functions or methods
        virtual void speak() {
            cout << "Animal makes a sound" << endl;
        }

        // virtual int virtualInt() = 0; // Creatiion Of Animal Instance Not Allowed if there is a pure virtual function

        void cannotOverride() {
            cout << "Did Not Override" << endl;
        }
};


class Dog : public Animal { // Dog derives or inherits Animal (Subclass)
    public:
        void speak() override {
            cout << "Dog barks" << endl;
        }

        void cannotOverride() { // Cannot even add override
            cout << "Dog Override" << endl;
        }

        int virtualInt() {
            return 1;
        }

        void printDog() {
            cout << "Dog" << endl;
        }
};


class Cat : public Animal { // Cat derives Animal (Subclass)
    public:
        void speak() override {
            cout << "Cat meows" << endl;
        }

        int virtualInt() {
            return 2;
        }
        
        void printCat() {
            cout << "Cat" << endl;
        }
};


void runTimePolymorphism() {
    // Create instances of derived classes
    Animal* animal = new Animal;
    Animal* animalDog = new Dog;
    Animal* animalCat = new Cat;

    // Use polymorphism to call the speak() method
    animal->speak();  // Calls the base class method
    animalDog->speak();     // Calls the Dog class method
    animalDog->cannotOverride(); // Uses the base class's method
    //animalDog->printDog(); // Class Animal has no member printDog()
    animalCat->speak();     // Calls the Cat class method

    Dog* dog = new Dog;
    Cat* cat = new Cat;

    cout << endl;
    
    dog->printDog();
    dog->cannotOverride(); // Uses its own method
    cat->printCat();
    cat->cannotOverride(); // Uses the base class's method

    cout << endl;

    dog->speak();
    cat->speak();

    delete animal;
    delete animalDog;
    delete animalCat;
    delete dog;
    delete cat;
}
//---Runtime Polymorphism--------------------------------------------------------------------------------------------End


//---Compile-Time Polymorphism--------------------------------------------------------------------------------------------Start
// Function Overloading----------------------Start
int add(int a, int b) { // Function to add two integers
    return a + b;
}

int add(int a, int b, int c) { // Function to add three integers
    return a + b + c;
}

double add(double a, double b) { // Function to add two double numbers
    return a + b;
}
// Function Overloading----------------------End

// Operator Overloading----------------------Start
class ComplexNumbers {
    public:
        ComplexNumbers(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

        ComplexNumbers operator+(const ComplexNumbers& right) { // Overloading the + operator for Complex numbers
            cout << "(real) Left Hand Side Of + Is " << this->real << endl;
            cout << "(real) Right Hand Side Of + Is " << right.real << endl;
            ComplexNumbers result;
            result.real = this->real + right.real;
            result.imaginary = this->imaginary + right.imaginary;
            return result;
        }

        void display() { // Display the Complex number
            cout << real << " + " << imaginary << "i" << endl;
        }

    private:
        double real;
        double imaginary;
};
// Operator Overloading----------------------End


void compileTimePolymorphism() {
    cout << "Function Overloading" << endl;
    int num1 = 5, num2 = 10, num3 = 20;
    double double1 = 2.5, double2 = 3.7;

    int result1 = add(num1, num2); // Call the integer add function
    cout << "Result of integer addition: (2 Numbers) " << result1 << endl;

    int result2 = add(num1, num2, num3); // Call the integer add function
    cout << "Result of integer addition: (3 Numbers) " << result2 << endl;

    double result3 = add(double1, double2); // Call the double add function
    cout << "Result of double addition: " << result3 << endl;

    cout << "\nOperator Overloading" << endl;
    ComplexNumbers cNum1(2.0, 3.0);
    ComplexNumbers cNum2(1.5, 2.5);
    ComplexNumbers cNum3(5.0, 6.0);

    ComplexNumbers sum = cNum1 + cNum2 + cNum3; // Using the overloaded + operator

    cout << "Complex number sum addition: ";
    sum.display();
}
//---Compile-Time Polymorphism--------------------------------------------------------------------------------------------End


////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main() {
    cout << "Runtime Polymorphism:" << endl;
    runTimePolymorphism();
    cout << endl << endl << "Compile-Time Polymorphism" << endl;
    compileTimePolymorphism();

    return 0;
}


// Notes:
/*
Colon : - Inheritance specifier

This code demonstrates the concept of polymorphism and how you can use base class pointers to point to objects of derived classes. 
Since both Dog and Cat are derived from Animal, you can treat them as if they are Animal objects through these pointers. 
This allows you to call methods and access members defined in the base class (Animal) and, if overridden in the derived classes 
(Dog and Cat), use the overridden versions.

However, the derived classes may only use base class members or their own methods if they are overidden versions of the base class.
For this to be allowed you declare a member as "virtual" which just means that the derived classes may optionally override whatever 
is after "virtual".

Polymorphism:
Polymorphism, which means "many forms," allows objects of different classes to be treated as objects of a common base class.
    1. Compile-Time Polymorphism, Static Polymorphism, Static Binding
    This type of polymorphism is achieved by function overloading or operator overloading.
    The determination of which function or method to use is made by the compiler during the compilation process, before 
    the program is actually executed. When there are multiple functions with the same name but different parameters, then 
    the functions are said to be overloaded. Functions can be overloaded by changing the number of arguments or/and changing 
    the type of arguments.
    C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading.

    2. Runtime Polymorphism (virtual). Dynamic Binding
    This type of polymorphism is achieved by Function Overriding. It is called runtime polymorphism since the decision for which
    method is called depends on the type of object that is being pointed to which is allocated on the heap which means
    that it can only be determined at runtime.
        Dynamic Dispatch: Virtual Dispatch
        Virtual functions enable dynamic dispatch, where the decision about which method to call is made at runtime, not at compile time.
        "override" is an optional keyword but helps the compiler locate the correct function

ComplexNumbers(double real = 0.0, double imaginary = 0.0) : real(real), imaginary(imaginary) {}

ComplexNumbers operator+(const ComplexNumbers& other) { // Overloading the + operator for Complex numbers
    ComplexNumbers result;
    result.real = this->real + other.real;
    result.imaginary = this->imaginary + other.imaginary;
    return result;
}

The operator+ function is overloaded to handle addition of two ComplexNumbers objects. When you use the + operator between two ComplexNumbers 
objects, it calls this custom-defined function. The function creates a new ComplexNumbers object (result) and calculates the sum of the real 
and imaginary parts separately.

    ComplexNumbers cNum1(2.0, 3.0);
    ComplexNumbers cNum2(1.5, 2.5);

    ComplexNumbers sum = cNum1 + cNum2; 

    The left-hand operand is the object on which the operator is called, and the right-hand operand is the one passed as an argument.


Classes:
(class) ; - The semicolon tells the C++ compiler that the class declaration is complete.

main - In C++, the main function is typically defined at the global scope, not within a class.
The reason for this is that the main function serves as the starting point for program 
execution, and it needs to be accessible from outside of any class or namespace.

Placing main inside a class would mean that it would need an object of that class to be 
invoked(to call a method or function associated with that object), which 
is not how the C++ runtime environment is designed to work. Instead, the main function is a standalone 
function that is called automatically when you run a C++ program. It acts as the entry point for program 
execution and is not associated with any specific class or object.



In C++:

Overriding Rules:
    In C++, a method in a derived class can override a method in the base class if it has the same name, parameters, 
    and return type, and if the base class method is marked as virtual or is part of the base class's interface 
    (specified in the base class as a non-virtual method).

New Methods:
    If a derived class defines a method with the same name as a base class method but with a different parameter list or return type, 
    it creates a new method in the derived class, and this is not considered method overriding.

Hiding Base Class Methods:
    C++ allows derived classes to "hide" methods from the base class, which can lead to unexpected behavior if not used carefully. 
    This is different from Java, where method hiding is not allowed.

In contrast, in Java:

Overriding Rules:
    In Java, method overriding is more strict and is based on specific rules. The method in the derived class must have the same name, 
    parameters, and return type, and it must explicitly use the @Override annotation to indicate that it is intended to override a base class method.

Preventing Ambiguity:
    Java's stricter rules are designed to prevent ambiguity and ensure that method overriding is clear and intentional.


Compiler - Translates a high level human readable language like Java, C++, C, Python, etc... into Machine Binary Language.

Pure Virtual Function -  virtual FunctionReturnType FunctionName = 0; 
Any class that inherits from a base class that contains a pure virtual function must implement their own definition of the function or else the
program has a compile time error.
    Compile Time Error - A type of Syntax Error that occurs during or before the building process of a code, preventing the code from running.
A pure virtual function is a virtual function that is not implemented in the base class, thus all derived classes must override the function. 
A pure virtual function is declared with the "virtual" keyword and is assigned with 0.

A Super Class with a virtual function becomes an Abstract Class.
An Abstract Class is a class that cannot be instantiated as an object, but is the superclass for a
subclass and specifies how the subclass must be implemented.

A Concrete Class is a class that is not abstract, and hence can be instantiated.
*/