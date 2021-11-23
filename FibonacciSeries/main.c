#include <stdio.h>
#include <stdlib.h>

//5: 0 1 1 2 3

int main()
{
    int n, i, n1 = 0, n2 = 1, n3;

    printf("Enter any number:");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d", n1, n2);
    for(i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        printf(" %d", n3);
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
