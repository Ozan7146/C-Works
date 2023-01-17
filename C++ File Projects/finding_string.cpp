#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
	int theCount=0;
	char a[100];
	ifstream file("file.txt");
	
	while(!file.eof())
	{
		file >> a;
		if(strcmpi("the",a) == 0)
			theCount++;
	}	
	
	cout << "Number of The:" << theCount << endl;
	file.close();
	
	
	return 0;
}
