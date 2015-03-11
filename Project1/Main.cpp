#include "iostream"
using namespace std;
char mat[3][3] = {'1','2','3','4','5','6','7','8','9'};
int plays = 0;
int win = 0;
void print()
{
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			cout << mat[a][b]<< " ";
		}
		cout << endl;
	}
}
void input()
{
	int input;
	cout << "select a number from the board to play " << endl;
	cin >> input;

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 3; b++)
		{
			if (mat[a][b] == input)
			{
				if (plays % 2 == 0)
				{
					mat[a][b] = 'X';
					plays++;
				}
				else
				{
					mat[a][b] = 'O';
					plays++;
				}
			}			
		}
		
	}
}
void checkwin()
{
	for (int b = 0; b < 3; b++)
	{
		if (mat[b][0] == mat[b][0] && mat[b][1] == mat[b][2])
		{
			win = 1+ (plays % 2) ;
		}
	}
	for (int b = 0; b < 3; b++)
	{
		if (mat[0][b] == mat[1][b] && mat[1][b] == mat[2][b])
		{
			win = 1 + (plays % 2);
		}
	}

	if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2])
	{
		win = 1 + (plays % 2);
	}

	if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0])
	{
		win = 1 + (plays % 2);
	}

}
int main()
{
	cout << "tic tac toe game"<<endl;
	while (plays =! 8)
	{
		print();
		system("Pause");
		int temp = plays;
		cout << "Select a number from the board to play " << endl;
		system("Pause");
		input();
		system("Pause");
		if (temp == plays)
		{
			cout << "The number you have selected was unavailable try again " << endl;
			system("Pause");
		}
		checkwin();
		if (win == 1)
		{
			cout << "player 'X' has won "<<endl;
			plays = 8;
			system("Pause");
		}
		if (win == 3)
		{
			cout << "player 'O' has won " << endl;
			plays = 8;
			system("Pause");
		}

	}
	if (plays == 8 && win == 0)
	{
		cout << "the game was a draw " << endl;
		system("Pause");
	}
}