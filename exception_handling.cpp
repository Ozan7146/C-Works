#include<iostream>

using namespace std;



int divide(int x) throw (const char)
{
	if(x<0) throw "Negative number is entered";
	else return 10/x;
}


int main()
{
	int x;
	try{
	
	cout << "Enter number:";
	cin >> x;
	cout << divide(x) << endl;
	}
	
	catch(const char *s)
	{
		cout << s << endl;
	}
	
	cout << "Continue execution ";
	
	
	
	
	
	
/*	try
	{
		if (x == 10)
			throw 1;
		else throw 0;
	
	}
	
	catch(int i)
	{
		cout << "Done,exist status:" << i << endl;
	}
*/	
	
	return 0;
}
