#include "input.h"
#include "player.h"
#include"board.h"
#include<iostream>
#include<string>
using namespace std;
using std::string;

input::input()
{
	
	char  a;

	int i = 2;
	cout << "Player 1 enter name";

	std::getline(cin, p[0]);
	cout << "Hello " << p[0] << endl;
	cout << "What would you like your symbol to be";
	cin >> s[0];
	cin.ignore();
	cout << "Player 2 enter name";
	std::getline(cin, p[1]);
	cout << "Hello " << p[1] << endl;
	cout << "What you like your symbol to be";
	cin >> s[1];

	cout << "ADD ANOTHER PLAYER(y/n)";
	cin >> a;
	cin.ignore();
	while (a == 'y'&&i<5)
	{
		c++;
		cout << "Player" << i + 1 << " enter name";
		std::getline(cin, p[i]);
		cout << "What would you like your symbol to be";
		cin >> s[i];
		cout << "ADD ANOTHER PLAYER(y/n)";
		cin >> a;
		cin.ignore();
		++i;
	}
}



void input::in()
{
	
	int x, y,z=0;
	board b;
	while (1){
		for (int i = 0; i < c; i++)
		{
			cout << p[i];
			cout << " enter coordinates";
			cin >> x >> y;
			b.mark(x-1, y-1, s[i]);
			b.board1();
			z=b.checkboard(x-1,y-1,p[i],s[i]);
			if (z >0)
			{
				break;
			}
		}
		if (z >0)
		{
			break;
		}
	}
}

