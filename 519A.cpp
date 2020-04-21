#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() 
{
	vector<vector<char>> board(8, vector<char> (8));
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
			cin >> board[i][j];

	int white=0,black=0;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(board[i][j] == 'Q')
				white+=9;
			if(board[i][j] == 'R')
				white+=5;
			if(board[i][j] == 'B')
				white+=3;
			if(board[i][j] == 'N')
				white+=3;
			if(board[i][j] == 'P')
				white+=1;
			if(board[i][j] == 'q')
				black+=9;
			if(board[i][j] == 'r')
				black+=5;
			if(board[i][j] == 'b')
				black+=3;
			if(board[i][j] == 'n')
				black+=3;
			if(board[i][j] == 'p')
				black+=1;
		}
	}
	if(white>black)
		cout << "White" << endl;
	else if(black>white)
		cout << "Black" << endl;
	else
		cout << "Draw" << endl;
	return 0;
}