//C Program to simulate a simple calculator
#include <stdio.h>

void addition();

int main()
{
    int opt;
    printf("1-Addition\n2-Substraction\n3-Multiplication\n4-Division\n5-Exit\n");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
        addition();
        break;
        
      case 2:
        
        break;
        
      case 3:
      
        break;  
      
      case 4:
        
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
  int a,b;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  printf("Sum of %d and %d is %d",a,b,a+b);
}
