#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[2][2][2];
    int i, j, k;

    printf("Enter values in table:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            scanf("%d", &arr[i][j][k]);
        }
    }

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            for(k = 0; k < 2; k++)
            printf("%d  ", arr[i][j][k]);
        }
    }

    return 0;
}
