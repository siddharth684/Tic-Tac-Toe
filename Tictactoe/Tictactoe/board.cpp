#include "board.h"
#include<iostream>
using namespace std;
int  i, j, m;

void board::b1()
{
	
	cout << "How wide the board should be?";
	cin >> i;
	cout << "How high the board should be?";
	cin >> j;
	cout << "How many marker horizontally and vertically are needed to win?";
	cin >> m;
	while (m > i || m > j)
	{
		cout << "NOT POSSIBLE";
		cin >> m;
	}
	for (int k = 0; k < i; k++)
	{
		for (int l = 0; l < j; l++){
			bs[k][l] = ' ';
		}
	}
}


void board::board1(){
	int n = 0;
	for (int k = 0; k < i; k++)
	{
		cout << " | " << k + 1;
	}
	cout << endl;
	for (int l = 0; l < j; l++)
	{

		
		for (int k = 0; k < i; k++)
		{
			cout << "----";
		}
		cout << endl;
		cout << ++n;
		for (int k = 0; k < i; k++)
		{
			cout << "| " << bs[l][k] << " ";
		}
		cout << endl;
	}
	
}

void board::mark(int mx, int nx,char o){
	bs[mx][nx] = o;
}
int board::checkboard(int x,int y,string s,char sym){
	int n = m - 1,i=0, win=0;
	for (int a = 0; a < i; a++){
		for (int b = 0; b < j; b++){
			if (bs[a][b] != ' ' && win==0){
				cout << "tie";
				++i;
				return i;
			}
		}
	}
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < j; b++)
		{
			if (bs[a][b] == s[0])
			{
				while (n != 0)
				{
					if (bs[a + 1][b + 1] == s[0])
						n--;
					else break;
				}
				if (n == 0)
				{
					win = 1;
					break;
				}
			}
		}
	}
	if (win == 1)
	{
		i = 1;
		return i;
	}
	for (int a = 0; a < i; a++)
	{
		for (int b = 0; b < j; b++)
		{
			if (bs[a][b] == s[0])
			{
				while (n != 0)
				{
					if (bs[a + 1][b + 1] == s[0])
						n--;
					else break;
				}
				if (n == 0)
				{
					win = 1;
					break;
				}
			}
		}
	}
	}

	