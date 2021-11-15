#include <stdio.h>
#include <stdlib.h>

int main()
{
    //switch: Menu Driven Program

    int a, b, choice;

    while(1) // 1 - infinite loops/repetition/iteration
    {

        printf("\n\nCalculator\n\n");
        printf("Press 1. Addition\n");
        printf("Press 2. Subtraction\n");
        printf("Press 3. Multiplication\n");
        printf("Press 4. Division\n");
        printf("Press 5. Exit\n");
        printf("\n\nEnter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:

            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Addition is: %d", (a + b));
            break;

        case 2:

            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Subtraction is: %d", (a - b));
            break;

        case 3:

            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Multiplication is: %d", (a * b));
            break;

        case 4:

            printf("Enter any value for a and b:");
            scanf("%d %d", &a, &b);

            printf("Division is: %d", (a / b));
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Choice");

        }
    }

    //printf("\nOutside Block");

    return 0;
}
