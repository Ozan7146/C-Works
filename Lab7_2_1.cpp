#include<iostream>

using namespace std;

class Math
{
	private: //public yazınca çalışıuor private yazınca çalışmıyor neden??
		
		int num1,num2,result;
	
	public:
		

		Math(){}
		
	
		int add()
		{
			this->result = this->num1 + this->num2;
			return this->result;
		}
		
		int multiply()
		{
			this->result = this->num1 * this->num2;
			return this->result;
		}
		
		friend ostream& operator << (ostream& cout, const Math& h1);
		friend istream& operator >> (istream& cin , const Math& h1);
		
		
	
};



ostream& operator << (ostream& cout , Math& h1 )
	{
		cout << "Addition:" << h1.add() << endl;
		cout << "Multiplication:" << h1.multiply() << endl;
		return cout;
	}
		
istream& operator >> (istream& cin , Math& h1 )
	{
		cin >> h1.num1 >> h1.num2 ;
		return cin;
	}



int main()
{
	Math h1;	
	cout <<	"Enter two integers:" << endl;
	cin >> h1;
	cout << h1;

	
	return 0;
}
