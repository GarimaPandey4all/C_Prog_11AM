#include <stdio.h>
#include <stdlib.h>

//123 = 1 + 2 + 3 = 6

int main()
{
    int n, r, sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);

    while(n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("Sum of Digits is: %d", sum);

    return 0;
}
