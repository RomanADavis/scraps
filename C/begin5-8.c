// Program 5.8 - Tic Tac Toe
#include <stdio.h>

int main(void)
{
	int player = 0;									// Current player
	int winner = 0;									// Winning player
	int choice = 0;									// Chosen square
	unsigned int row = 0;							// Row index for a square
	unsigned int column = 0;						// Column index for a square
	char board[3][3] = {							// The board
				{'1', '2', '3'},					// Initial values of characters 
				{'4', '5', '6'},					// '1' to '9' used to select vacant
				{'7', '8', '9'}						// squares for the player's turn.
					};
					
	// Main game loop - runs for 9 turns or until there is a winner
	unsigned int i;
	for(i = 0; i < 9 && winner == 0; ++i)
	{
		// Print square and label them 1-9
		printf("\n");
		printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
		printf("---+---+---\n");
		printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
		
		player = i%2 + 1;							// Switch players
		
		//	Prompt player to pick a number to have his charcacter (X or 0) entered
		do
		{
			printf("Player %d, please enter a valid square number "
					"for where you want to place your %c: ",
					player, (player == 1) ? 'X' : 'O');
			scanf("%d", &choice);
			
			row = --choice/3;						// Get row index of a square
			column = choice % 3;					// Get column index of a square
		}while(choice < 0 || choice > 8 || board[row][column] > '9'); // number is valid
	
		// Change board
		board[row][column] = (player == 1) ? 'X' : 'O';
		
		// Code to check for a winner
			// Diagonals
		if((board[0][0]==board[1][1] && board[0][0] == board[2][2]) ||
			(board[0][2] == board[1][1] && board[0][2] == board[2][0]))
			winner = player;
		else
		{
			// Check rows and columns for a winning line
			unsigned int line;
			for(line = 0; line <= 2; ++line)
			{
			if((board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
				(board[0][line] == board[1][line] && board[0][line] == board[2][line]))
				winner = player;
			}
		}
	}
	// Game Over, Display final board
	printf("\n");
	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
	
	// Display result message
	if(winner)
		printf("\nCongratulations, player %d, YOU ARE THE WINNER!\n", winner);
		else
		printf("\nHow boring. It's a draw.\n");
	return 0;
}
