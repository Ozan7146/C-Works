#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char a;
	char b[100];
	ifstream fin("file.txt");
	
	
	
	while(! fin.eof())
	{
		fin.get(b,100);
		cout << b;//bunda sadece ilk sat�r� ald�.
		fin.get(a);//bunda t�m sat�rlar� ald�.
		cout << a;
	}	
	
	
	
	/*cout << "Enter the name:" ;
	cin.get(b,5);
	cout << b;
	cin.get(a);
	cout << a;
	*/
	fin.close();
	return 0;
}
