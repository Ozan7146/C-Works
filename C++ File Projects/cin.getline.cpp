#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


int main()
{
	
	
	ofstream file;
	file.open("file.txt",ios::app);

	if(file.fail())
	{
		cout << "Error opening file... " << endl;
	}	
	
	else
	{
		
		char line[100];
		string x;
		
		cout << "Enter your name:" << endl;
		cin >> x;
		file << x <<endl;
		
		cout << "Enter your RollNo:" << endl;
		cin.getline(line,100);
		file << line <<endl;











		cout << "Enter your Age:" << endl;
		cin.getline(line,100);
		file << line <<endl;

		cout << "Line written into the file" << endl;
		file.close();
	}
	
	return 0;
}
