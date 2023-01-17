#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream file("file.txt");
	int count=0;
	char ch;
	while(!file.eof())
	{
		file.get(ch);
		cout << ch;
		count++;
	}
	
	cout << "Number of chars in the file:" << count << endl;
	return 0;
}
