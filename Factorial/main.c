#include <stdio.h>
#include <stdlib.h>

//5! = 5 * 4 * 3 * 2 * 1 = 120

int main()
{
    int n, i, fact = 1;

    printf("Enter any number:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }

    printf("Factorial is: %d", fact);

    return 0;
}
