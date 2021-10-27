#include <stdio.h>
#include <stdlib.h>

//1 byte = 8 bits
//
//int
//2 bytes - 16 bits compiler
//4 bytes - 32 bits compiler

int main()
{
    int a = 10; // 2 or 4 bytes
    char ch = 'F'; // 1 byte
    float pi = 3.14f; // 4 bytes
    double d = 56.7; // 8 bytes // long float

    printf("a is: %d\n", a);
    printf("ch is: %c\n", ch);
    printf("pi is: %.2f\n", pi);
    printf("d is: %lf\n", d);

    printf("Int is: %d\n", sizeof(a));
    printf("Char is: %d\n", sizeof(char));
    printf("Float is: %d\n", sizeof(float));
    printf("Double is: %d\n", sizeof(d));


    return 0;
}
