#include <stdio.h>
#include <stdlib.h>
//
//123 = 321 = NP
//121 = 121 = P

int main()
{
    int n, r, sum = 0, temp;

    printf("Enter any number:");
    scanf("%d", &n);

    temp = n;

    while(n > 0)
    {
        //121 = 121
        r = n % 10;  // 1, 2, 1
        sum = sum * 10 + r; // 1, 12, 121
        n = n / 10; // 12, 1, 0
    }

    n = temp;

    if(sum == n)
    {
        printf("Palindrome Number");
    }
    else {
        printf("Not a Palindrome Number");
    }

    return 0;
}
