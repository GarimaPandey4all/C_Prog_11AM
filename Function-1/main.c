#include <stdio.h>
#include <stdlib.h>

//functions has 4 types:
//
//    1. function without arguments and without without return type
//    2. function with arguments and without without return type
//    3. function without arguments and without with return type
//    4. function with arguments and without with return type

//1. function without arguments and without return type

//function declaration/optional
void add();

//function definition/initialization
void add()
{
    int a, b;

    printf("\nEnter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Addition: %d", (a + b));
}

int main()
{
//    function provides reuseability in your program

    //function calling/usage
    add();
    add();

    return 0;
}
