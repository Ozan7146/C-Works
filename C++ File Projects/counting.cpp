#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<cstdio>
using namespace std;

int main()
{
	
	ifstream fin("file.txt");
	char ch[100];
	string line,line1[100];
	int chCount,strCount;
	for(int i=0;i<100;i++) // number of characters
	{
		if(fin >> gets(ch))
			chCount++;
	}
	
	for(int i=0;i<100;i++)
	{
		 if(fin >> line1[i])
		 	strCount++;
	}
	
	//cout << "Number of line is:" << getline(fin,100) << endl; // number of lines
	cout << "Number of word is:" << strCount << endl;
	cout << "Number of character is:" << chCount << endl;
	fin.close();
	
	
	return 0;
}
