#include <stdio.h>
#include <stdlib.h>

//variable: container, that is used to store value or data of any type
//vary or change

//constant: fixed the value of variable

int main()
{
    int a = 60;
    const float pi = 3.14f;

    printf("A is: %d\n", a); // \n - enter or new line

    a = 100;

    printf("A is: %d\n", a);

    printf("PI is: %f\n", pi);

   // pi = 56.7f; // error

    printf("PI is: %f\n", pi);

    return 0;
}
