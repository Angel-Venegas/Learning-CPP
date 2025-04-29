#include <iostream>


int main() {
    bool a = true, b = false, c = true, d = false;

    // Using parentheses to explicitly show precedence
    bool result1 = (a || b) && c;
    bool result2 = a || (b && c);
    bool result3 = a && b || c;
    bool result4 = a && (b || c);
    bool result5 = a || b && c || d;
    bool result6 = a && b || c && d;

    std::cout << std::boolalpha;
    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;
    std::cout << "Result 4: " << result4 << std::endl;
    std::cout << "Result 5: " << result5 << std::endl;
    std::cout << "Result 6: " << result6 << std::endl;

    return 0;
}


/*
Order Of Precedence:
    0. Paranthesis Operator:
    Highest Precedence.

    1. Unary Operators:
    Unary operators, such as ++, --, +, -, !, and ~, have the highest precedence and are right-to-left associative.
    
    2. Multiplicative Operators:
    Multiplicative operators (*, /, %) have the second-highest precedence and are left-to-right associative.
    
    3. Additive Operators:
    Additive operators (+, -) have lower precedence than multiplicative operators and are left-to-right associative.
    
    4. Shift Operators:
    Shift operators (<<, >>) come next and are left-to-right associative.
    
    5. Relational Operators:
    Relational operators (<, <=, >, >=) have lower precedence and are left-to-right associative.
    
    6. Equality Operators:
    Equality operators (==, !=) have lower precedence and are left-to-right associative.
    
    7. Bitwise AND Operator:
    Bitwise AND (&) has lower precedence and is left-to-right associative.
    
    8. Bitwise XOR Operator:
    Bitwise XOR (^) has lower precedence and is left-to-right associative.
    
    9. Bitwise OR Operator:
    Bitwise OR (|) has lower precedence and is left-to-right associative.
    
    10. Logical AND Operator:
    Logical AND (&&) has lower precedence and is left-to-right associative.
    
        11. Logical OR Operator:
        Logical OR (||) has lower precedence and is left-to-right associative.
        
        12. Conditional Operator (Ternary Operator):
        The conditional operator (? :) has lower precedence and is right-to-left associative.
        
        13. Assignment Operators:
        Assignment operators (=, +=, -=, *=, /=, %=) have lower precedence and are right-to-left associative.
        
        14. Comma Operator:
        The comma operator (,) has the lowest precedence and is left-to-right associative.
    
    It's important to note that parentheses can be used to override the default precedence and associativity, 
    allowing you to explicitly control the order of evaluation in expressions.
*/