#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&&, ||, !

    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Logical And: %d\n", (a > 10 && b < 5));
    printf("Logical Or: %d\n", (a > 10 || b < 5));
    printf("Logical Not: %d\n", !(a > 10 && b < 5));

    return 0;
}
