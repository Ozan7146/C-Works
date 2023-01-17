#include<iostream>
#include<fstream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
	ifstream myFile;	
	myFile.open("file.txt");
	string line,new_line;
	
	while(!myFile.eof())
	{
		getline(myFile,line);
		
		
	}
	string str = line.substr(1,17);
	
	new_line = str.substr(15,2);
	string new_string = str.substr(0,13);
	cout << new_string << endl << new_line  ;
	myFile.close();
	return 0;
}
