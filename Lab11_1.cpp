#include<iostream>

using namespace std;

class Negative
{ // controls number of trucks and return a message
	private:
		
		string message;
	
	public:
		
		Negative(string message)
		{
			this->message = message;
		}

		
		string getMessage()
		{
			return message;
		}	
};


class ZeroDivision // just for throw and catch from main function
{	// In 0 and negative numbers it will occur error
	public:
		
		ZeroDivision(int x,int y)
		{
			try
			{
				if(x <= 0 )	
				{
					string z = "Wrong load input" ;
					throw z;
				}
			}	
			
			catch(string d)
			{
				cout << d << endl;
			}
			
			try
			{
				if(y <= 0 )
				{
					Negative a("Wrong truck input");
					throw a.getMessage();
				}
			}
			
		
			catch(string c)
			{
				cout << c << endl;	
			}
			
		
			
		
		}

};



int main()
{
	int load;
	int truck;
	double loadPerTruck;
	cout << "Enter number of packages to load: " << endl;
	cin >> load;
	
	cout << "Enter the number of trucks available: " <<endl;
	cin >> truck;
	ZeroDivision obj(load,truck);
	cout << "Leaving the program";
	
	return 0;
}
