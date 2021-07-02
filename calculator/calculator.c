//C Program to simulate a simple calculator
#include <stdio.h>

int main()
{
     char ch;
     int n1,n2;

     printf("\n\tChoose an operator(+,-,*,/,%): ");
     scanf("%c",&ch);

     printf("Enter first number: ");
     scanf("%d", &n1);
     printf("Enter second number: ");
     scanf("%d", &n2);

    return 0;
}
