#pragma once
#include<string>
using std::string;
class board
{
public:
	void b1();
	void board1();
	void clearboard();
	void mark(int mx, int nx,char o);
    int checkboard(int xa,int ya,string s,char sym);
private:
	char bs[15][15];
};

