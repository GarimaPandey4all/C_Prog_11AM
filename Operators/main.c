#include <stdio.h>
#include <stdlib.h>
//
//operator - symbol
//
//e.g: +, - , / , *

//1. Arithmetic Operators
//+, - , / , * , %, ++, --
//2. Comparison/Relational Operators
//3. Logical Operators
//4. Bitwise Operators
//5. Assignment Operators

//'' - char
//"" - string: more than one character or collection of chars

int main()
{
//    a + b: Expression / Equation
//    +: operator
//    a, b: operands

    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition is: %d\n", (a + b));
    printf("Subtraction is: %d\n", (a - b));
    printf("Multiplication is: %d\n", (a * b));
    printf("Division is: %d\n", (a / b)); // qoutient

    //a = 4, b = 5
    printf("Modulus is: %d\n", (a % b)); // remainder = 4 % 5

//    ++, --
//    ++: Increment operator
//    --: Decrement operator
//
//    Pre and Post

    printf("Pre-Increment is: %d\n", ++a); // 5
    printf("Post-Increment is: %d\n", a++); // 5
    printf("A is: %d\n", a); // 6

    printf("Pre-Decrement is: %d\n", --a); // 5
    printf("Post-Deccrement is: %d\n", a--); // 5
    printf("A is: %d", a); // 4

    return 0;
}
