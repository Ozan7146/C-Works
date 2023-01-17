#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	char fname[20];
	char x[200];
	
	cout << "Enter the file name:" << endl;
	cin >> fname;
	
	
	fstream file(fname,ios::out | ios::in); 
	
	
	while(!file.eof())
	{
		file.get(x,100);
		cout << x;
		//file >> x;
		//cout << x;
	}
		file.close();
		return 0;
}
