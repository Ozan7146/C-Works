#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main()
{

	ifstream file;
	ofstream outfile;
	outfile.open("studentsFinalScore.txt");
	file.open("studentsGrade.txt");
	string line,name,surname;
	float m1,m2,f1,avg;
	int id;
	while(!file.eof())
	{
		file >> name >> surname >> id >> m1 >> m2 >> f1 ;
		avg = (m1*30)/100+(m2*30)/100 +(f1*40)/100;
		outfile << "\t" << name << "\t" << surname  << "\t" << id  << "\t" << m1 << "\t" << m2 << "\t" << f1 << "\t" << avg << endl;		

	}
	
	file.close();
	outfile.close();
	
	
	return 0;
}
