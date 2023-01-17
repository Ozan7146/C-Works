#include<iostream>

using namespace std;

class divByZero
{
	private:
		
		string msg;
		
	public:
		
		divByZero(string t)
		{
			msg = t;
		}
		
		string getmsg()
		{
			return msg;
		}
};

double divide(double a,double b)
{
	if(b==0)
	{	throw(divByZero("Divide by zero"));

		return a/b;
				
	}
}

int main()
{
	int a,b;
	try
	{
		cin >> a >> b;
		cout << divide(a,b);
	}
	
	catch(divByZero err)
	{
		cout << "Exception:" << err.getmsg() << endl; 
		
	}
	return 0;
}
