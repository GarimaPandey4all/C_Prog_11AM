#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][3]; // 2 - rows, 3 - cols = 6 values
    int i, j;

    printf("Enter values in table:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d  ", arr[i][j]);
        }

        printf("\n");
    }

    return 0;
}
