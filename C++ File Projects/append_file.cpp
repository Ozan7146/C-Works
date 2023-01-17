#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;



int main()
{

	ofstream fout;
	fout.open("file.txt");
	char a[15];
	cout << "Enter the name:" << endl;
	cin.getline(a,15);
	fout << a << endl;
	cout << "Enter the surname:" << endl;
	cin.getline(a,100);
	fout << a << endl;
	fout.close();	
	return 0;
}
