#include<stdio.h>
char grid[3][3];		//board on which game is played
int turn;				//variable to track whose turn it is

void reset_board();		//resets all positions to null character
void display();			//display the grid
void game();			//loop in which game runs

int main()
{
	reset_board();
	game();
}


void reset_board()
{
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			grid[i][j]='\0';
	turn=0;
}
void display()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(grid[i][j]=='\0')
			{
				printf("%d\t",(i*3)+j+1);
			}
			else
			{
				printf("%c\t",grid[i][j]);
			}
		}
		printf("\n");
	}
}
void game()
{
	int move;
	while(turn<9)
	{	
		display();
		do
		{
			printf("Turn of player %c\n",(turn%2)?'X':'O');
			scanf("%d",&move);
		}while(move<1 || move>9 || grid[(move-1)/3][(move-1)%3]!='\0');
		grid[(move-1)/3][(move-1)%3]=(turn%2)?'X':'O';
		turn++;
		
		//Check for winner is remaining to do
	}
	
	
}
