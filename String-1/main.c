#include <stdio.h>
#include <stdlib.h>

int main()
{
//    string: collection of characters or more than one character
//    string: char array
    char name[10];

    printf("Enter your name:");
    //scanf("%s", &name);
    gets(name);

    //puts(name);
    printf("Your name is: %s", name);

    return 0;
}
