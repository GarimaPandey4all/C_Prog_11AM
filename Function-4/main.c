#include <stdio.h>
#include <stdlib.h>

//2. function with arguments and with return type

//function declaration/optional
int add(int, int);

//function definition/initialization

int add(int a, int b)
{
    //printf("Addition: %d", (a + b));

    return (a + b);
}

int main()
{
    //function calling/usage
    int result = add(50, 70);

    printf("Addition is: %d", result);

    return 0;
}
