#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	
	ifstream File;
	File.open("Ozan.txt");
	int count;	
	string line;
	while(getline(File,line))
	{
		cout << line << endl;
		count ++;
	}
	File.close();
	cout << "Line:" << count << endl;
	
	
	return 0;
}
