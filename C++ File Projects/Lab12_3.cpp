#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	int chCount=0,lineCount=0,wordCount=0,blankCount=0;
	ifstream fin("file.txt");
	
	
	while(fin.get(ch))
	{
		chCount++;
		if(ch==' ' || ch==',')
			wordCount++;
		if(ch=='\n')
			lineCount++;
		if(ch==' ')
			blankCount++;		
		
	}
	cout << "Character:" << chCount << "\n" << "Word Count:" << wordCount << "\n" << "Blank Count:" << blankCount << "\n" << "Line count:" << lineCount <<endl; 
	fin.close();
	return 0;
}
