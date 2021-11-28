#include <stdio.h>
#include <stdlib.h>
//
//Array: It is a collection of similar types of data.
//It is used to store multiple values in a single variable.


int main()
{
    //Traditional Way of initialization
    int a[5] = {10, 20, 30, 40, 50}; // declaration and initialization
    int i;

    // access to array
    printf("Array: %d\n", a[2]);
    printf("Array: %d\n", a[0]);

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", a[i]);
    }

    // Compile time initialization
    int arr[] = {1, 2, 3}; // size of the array is 3

    return 0;
}
