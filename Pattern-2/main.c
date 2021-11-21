#include <stdio.h>
#include <stdlib.h>

int main()
{
    //
//    ASCII table
//
//    A - 65 to Z - 90
//    a - 97 to z - 122

    int i, j;

    for(i = 65; i <= 69; i++)
    {
        for(j = 65; j <= 69; j++)
        {
            //printf("%c", i);
            printf("%c", j);
        }
        printf("\n");
    }

    return 0;
}
