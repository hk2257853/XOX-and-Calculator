//check the ReadMe file 
#include <stdio.h>

int main()
{
    char Array[10]={0,'1','2','3','4','5','6','7','8','9'};
    int x=0,y=0,flag=0;

    //prints rows and column with 1 to 9 no.
    //just for player to know the game UI
    for (int i = 1; i <= 9; i++) 
    {
        printf(" %c |", Array[i]);
        if (i%3==0)
        {
            printf("\n");
        }        
    }

    //actual xox logic.
    for (int i = 0; i < 9; i++)
    {
        //player 2. 
        if (i%2==0)
        {
            printf("Player 2 Enter the grid you want to make X:\n");
            scanf("%d", &x);
            Array[x]='X';
            flag=2;
        }
        else        //player 1
        {
            printf("Player 2 Enter the grid you want to make O:\n");
            scanf("%d", &y);
            Array[y]='O';
            flag=1;
        }
    
    //updates the column.
    for (int i = 1; i <= 9; i++)
    {
        printf(" %c |", Array[i]);
        if (i%3==0)
        {
            printf("\n");
        }
        
    }

    //won condition. 
    //I was thinking to put a b c in [] part of array and use a loop to
    //put values and check... But I couldn't code it so messey code here :D
    if (Array[1]=='X' &&Array[2]=='O' &&Array[3]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[4]=='X' &&Array[5]=='O' &&Array[6]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[7]=='X' &&Array[8]=='O' &&Array[9]=='X')
    { printf("The winner is Player %d", flag);
      break;}  
    if (Array[1]=='X' &&Array[4]=='O' &&Array[7]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[2]=='X' &&Array[5]=='O' &&Array[8]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[3]=='X' &&Array[6]=='O' &&Array[9]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[1]=='X' &&Array[5]=='O' &&Array[9]=='X')
    { printf("The winner is Player %d", flag);
      break;}
    if (Array[3]=='X' &&Array[5]=='O' &&Array[7]=='X')
    { printf("The winner is Player %d", flag);
      break;}
            
    }      

    return 0;
}