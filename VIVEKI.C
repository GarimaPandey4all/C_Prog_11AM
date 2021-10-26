#include<stdio.h>

void main()
{
	int a, b;// variable declaration
	// a, b: variables, int - data type
	clrscr();
	printf("Enter any value for a and b:");
	scanf("%d%d", &a, &b); // user input at runtime
//	%d - integer format specifier
  //	& - address of operator

	printf("Addition is: %d", (a + b));

	getch();
}