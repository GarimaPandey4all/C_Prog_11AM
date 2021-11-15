#include <stdio.h>
#include <stdlib.h>
//
//Decision Making Statements / Conditional Statements
//
//1. If-else
//2. If-else if-else
//3. switch
//4. shorthand of if-else : ternary operator/conditional operator


int main()
{
    int a, b, c;

    printf("Enter any value for a and b:");
    scanf("%d %d %d", &a, &b, &c);

//    if(a > b)
//    {
//        printf("A is Greater");
//    }
//    else { // optional statement
//        printf("B is Greater");
//    }

//    if(a % 2 == 0)
//    {
//        printf("Number is Even");
//    }
//    else {
//        printf("Number is Odd");
//    }

//    if(a > b && a > c)
//    {
//        printf("A is Greater");
//    }
//    else if(b > c)
//    {
//        printf("B is Greater");
//    }
//    else {
//        printf("C is Greater");
//    }

//    ? : - ternary operator / conditional operator
//    ternary: 3
//
//    (condition) ? true : false;

    //(a > b) ? printf("A is Greater") : printf("B is Greater");

    //(a % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");

//    (a > b && a > c) ? printf("A is Greater") :
//        ((b > c) ? printf("B is Greater") : printf("C is Greater"));

    if(a > 18)
    {
        if(b <= 18)
        {
            printf("Division is: %d", (a / b));
        }
        else {
            printf("B is invalid");
        }
    }
    else {
        printf("A is invalid");
    }

    return 0;
}
