#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	char a[100];
	ifstream fin("Roger.txt");
	while(!fin.eof())
	{
	fin.getline(a,100);
	}
	
	cout << a << endl;
	
	return 0;
}
