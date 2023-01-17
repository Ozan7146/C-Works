#include<iostream>
#include<fstream>

using namespace std;


int divide(int x) throw(const char *)
{
	if(x<0) throw "Negative number is entered";
	else return 10/x;
}

int main()
{
	int x;
	try
	{
		cout << "Enter positive number:" ;
		cin >> x;
		 divide(x) ;
		
	}
	
	
	catch(const char *s )
	{
		cout << s << endl;
	}
	
	return 0;	
}
