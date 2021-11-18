#include <stdio.h>
#include <stdlib.h>

//Loop - Repeat - Iterate
//
//1. for
//2. while
//3. do-while

int main()
{
    int n, i = 1;

    printf("Enter any number:");
    scanf("%d", &n);

//    for(i = 1; i <= 10; i++) // for(;;){}
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//    }

//    while(i <= 10)
//    {
//        printf("%d * %d = %d\n", n, i, n * i);
//        i++;
//    }

    do {

        printf("%d * %d = %d\n", n, i, n * i);
        i++;

    }while(i <= 10);

    return 0;
}
