#include <stdio.h>
#include <stdlib.h>

//2. function with arguments and without return type

//function declaration/optional
void add(int, int);

//function definition/initialization
//function prototype: return type, functionname, function arguments type
//and number of arguments: void add(int a, int b)
void add(int a, int b) // formal arguments / Function Parameters
{
    printf("Addition: %d", (a + b));
}

int main()
{
    //function calling/usage
    add(20, 40); // actual arguments / Function Arguments

    return 0;
}
