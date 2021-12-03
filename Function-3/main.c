#include <stdio.h>
#include <stdlib.h>

//2. function without arguments and with return type

//function declaration/optional
int add();

//function definition/initialization

int add()
{
    int a, b;

    printf("\nEnter any value for a and b:");
    scanf("%d %d", &a, &b);

    //printf("Addition: %d", (a + b));

    return (a + b);
}

int main()
{
    //function calling/usage
    int result = add();

    printf("Addition is: %d", result);

    return 0;
}
