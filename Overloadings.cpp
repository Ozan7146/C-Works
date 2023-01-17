// + , - , << ,= , >> overloading

#include<iostream>

using namespace std;

class oper
{
	private:
		
		int x;
		
	public:
		
		oper()
		{
			cout << "Enter a:" << endl;
		}
	
		
		void operator - ()
		{
			x=-x;
		//	cout << x;	
		}		
		
		friend  ostream& operator << (ostream& cout, oper &b )
		{
			cout << b.x << endl;
			return cout ;
		}
		
		friend istream& operator >> (istream& cin , oper &c)
		{
			cin >> c.x ;
			return cin;
		}
		
		void operator = (oper a)
		{
			oper b;
			a.x = b.x;
		}
};

int main()
{
	
	oper a;
	
	cin >> a;
	oper b;
	cin >> b;
	//-a;
	a = b ;
	cout << a; 
	
	return 0;
	
}

