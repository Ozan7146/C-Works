#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	string a;
	int count=0;
	ifstream file("file.txt");
	char str[80];
	

	while(!file.eof())  
	{
		file.getline(str,80); // bunla a�a��daki tamamen ayn� bu da sat�r olarak al�yor
		count++;
		cout << str << endl;
	}
	
	cout << "Number of lines:" << count;




/*	while(!file.eof())
	{
		getline(file,a);
		cout << a << endl; //burda a sat�r olarak al�yor string halinde
		count++;
	}
	cout << "Number of lines:" << count << endl;
*/
	file.close();
	return 0;
}
