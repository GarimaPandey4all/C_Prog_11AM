#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[10];
    char str2[10];

    printf("Enter str1: ");
    gets(str1);

    printf("String Length is: %d\n", strlen(str1));
    printf("String str1 is copying to str2: %s\n", strcpy(str2, str1));
//    printf("String str1 is copying to str2: %s\n", strcpy(str2, "Delhi"));
//    printf("String str1 is concate with str2: %s\n", strcat(str1, str2));
    //concatenation / joining

//    str1: abc
//    str2: abb

    if(strcmp(str1, str2) == 0)
    {
        printf("Both the Strings are same");
    }
    else {
        printf("Strings are not same");
    }

    printf("\nString in Lowercase: %s\n", strlwr(str1));
    printf("String in Uppercase: %s", strupr(str1));

    return 0;
}
