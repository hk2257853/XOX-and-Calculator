#include<stdio.h>
char grid[3][3];		//board on which game is played
int turn;				//variable to track whose turn it is

void reset_board();		//resets all positions to null character
void display();			//display the grid
void game();			//loop in which game runs
int winner();			//checks for winner and displays it, returns 1 if anyone won else 0

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
		
		if(winner())
			break;
		turn++;
		
	}
	if(turn==9)
		printf("Game Draw");
}
int winner()
{
	if((grid[0][0]!='\0' && grid[0][0]==grid[0][1] && grid[0][0]==grid[0][2])	  ||
	   (grid[1][0]!='\0' && grid[1][0]==grid[1][1] && grid[1][0]==grid[1][2])	  ||
	   (grid[2][0]!='\0' && grid[2][0]==grid[2][1] && grid[2][0]==grid[2][2])	  ||
	   (grid[0][0]!='\0' && grid[0][0]==grid[1][0] && grid[0][0]==grid[2][0])	  ||
	   (grid[0][1]!='\0' && grid[0][1]==grid[1][1] && grid[0][1]==grid[2][1])     ||
	   (grid[0][2]!='\0' && grid[0][2]==grid[1][2] && grid[0][2]==grid[2][2])     ||
	   (grid[0][0]!='\0' && grid[0][0]==grid[1][1] && grid[0][0]==grid[2][2])     ||
	   (grid[0][2]!='\0' && grid[0][2]==grid[1][1] && grid[0][2]==grid[2][0])     )
	{
		printf("Player %c Wins!!!\n",(turn%2)?'X':'O');
		return 1;
	}
	return 0;
}
