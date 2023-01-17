#include<iostream>
#include<fstream>
#include<string>
#include<string.h>

using namespace std;

class Date
{
	public:
		
		int day;
		string month;
		int year;
		
	
		Date(int d,string m,int y)
		{
			day = d;
			month = m;
			year = y;
			
		}

};


class Player
{
	private:
		
		string first;
		string last;
		Date birthdate;
	
	public:	
		
		Player(string f,string l,int d,string m,int y) : birthdate(d,m,y)
		{
			first = f;
			last = l;
		}
		
		void setMonth(string a)
		{
			birthdate.month = a;
		}
		
		void printInfo(ostream &fout)
		{
			fout << first << " " << last << " " << getDay() << " " << birthdate.month << " " << getYear() << endl;
		}
	
		int getDay()
		{
			return birthdate.day;
		}
		
		int getYear()
		{
			return birthdate.year;
		}

};

int main()
{
	
	string name,surname,month;
	int date,year;
	
	ifstream fin("input1.txt");
	ofstream fout("output1.txt"); //file
	
	while(!fin.eof())
	{
		fin >> name >> surname >> date >> month >> year;	
	
		string a[] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
		try 
		{	
			for(int i=0;i<12;i++)
			{
				if(a[i].substr(0,3) == month.substr(0,3))
				{
					throw a[i];
				}
			}			
		}
		
		catch(string x)
		{
			Player p(name,surname,date,month,year);
			
			if(x != month)
			{
				p.setMonth(x);
				cout << "Incorrectly inputted month:" << month << " is corrected to " << x << endl;
			}
			
			p.printInfo(fout);
		} //end of catch
		
	}	//end of while
	
	fin.close();
	fout.close();	
	return 0;
}
