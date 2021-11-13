#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter any value for a and b:");
    scanf("%d %d", &a, &b);

    printf("Bitwise And: %d\n", (a & b));
    printf("Bitwise Or: %d\n", (a | b));
    printf("Bitwise X-Or: %d\n", (a ^ b));
    printf("Bitwise Left Shift: %d\n", (a << 1));
    printf("Bitwise Right Shift: %d\n", (a >> 1));
    printf("Bitwise Not or ones Complement: %d\n", ~(a & b));

    return 0;
}
