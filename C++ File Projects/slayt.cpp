#include<iostream>
#include<fstream>

using namespace std;



int main()
{
	
	ofstream fin;
	fin.open("file.txt");
	
	
	int count = 0;
	char ch;
	
		if(!fin)
		{
			cout << "File couldnt found " << endl;
		}
		
		else
		{
			while(!fin.eof())
			{
				fin.get(ch);
				count++;				
			}
				
			cout << "Number of character in file:" << count << endl;
		}
	fin.close();
	return 0;
}
