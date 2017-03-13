#include<iostream>
#include "board.h"
#include "input.h"
using namespace std;
void main()
{
	cout << "Welcome to TicTacToe game\n";
	input a;
	board b;
	
	b.b1();
	b.board1();
	a.in();
	system("PAUSE");
}