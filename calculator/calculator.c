//C Program to simulate a simple calculator
#include <stdio.h>

void addition();
void subtraction();
void multiply();
void divide();

int main()
{
    int opt;
    printf("\t***MENU***\n\n1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n5-Exit\n");
    printf("\n\tEnter your choice : ");
    scanf("%d",&opt);
    printf("\n");
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


