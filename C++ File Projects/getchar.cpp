#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	char rec[80];	
	string x ="Erorr";
	ifstream fin("file.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(rec,7);
		
		cout << rec << "  " ;
		
	
	}
	
	fin.close();
	getch();
	return 0;
}
