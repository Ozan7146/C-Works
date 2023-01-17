#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream file("word.txt");
	
	int word_count=0,line_count=0,character_count,upper_count,lower_count,blank_count;

	while(!file.eof())
	{
		for(int i=0; i<;i++)
		{	
			word_count++;
			
		}
		
	
	
	}
	file.close();
	cout << "Word count:" << word_count ;
	return 0;
}
