#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5], i;

    printf("Enter values:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
