//C Program to simulate a simple calculator
#include <stdio.h>

void addition();
void subtraction();
void multiply();
void divide();
void modulus();

int main()
{
    int opt;
    printf("\t***MENU***\n\n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n5-Modulus\n");
    printf("Enter your choice : ");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
        addition();
        break;
        
      case 2:
        subtraction();
        break;
        
      case 3:
        multiply();
        break;  
      
      case 4:
        divide();
        break;
        
      case 5:
        modulus();
        break; 
        
      default:
        printf("Invalid Input\n");
        break; 
    }
    return 0;
}
void addition()
{
  float a,b;
  printf("Enter two numbers\n");
  scanf("%f%f",&a,&b);
  printf("Sum of %.2f and %.2f is %.2f",a,b,a+b);
}

void subtraction()
{
  float a,b;
  printf("Enter two numbers\n");
  scanf("%f%f",&a,&b);
  printf("subtraction of %.2f and %.2f is %.2f",a,b,a-b);
}

void multiply()
{
  float a,b;
  printf("Enter two numbers\n");
  scanf("%f%f",&a,&b);
  printf("multiplication of %.2f and %.2f is %.2f",a,b,a*b);
}

void divide()
{
  float a,b;
  printf("Enter two numbers\n");
  scanf("%f%f",&a,&b);
  printf("division of %.2f and %.2f is %.2f",a,b,a/b);
}

void modulus()
{
  int a,b;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("Remainder of %d when divided by %d is %d",a,b,a%b);
}
