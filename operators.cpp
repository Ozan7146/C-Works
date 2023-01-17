#include<iostream>

using namespace std;

class ComplexNumber
{
	private:
		 
		int real;
		int imaginary;
	
	public:
		
		ComplexNumber()
		{
			
			cin >> real >> imaginary;
			
		}
		
		void operator + (ComplexNumber a)
		{
			ComplexNumber c ;
			c.real = a.real + this->real;
			c.imaginary = a.imaginary + this->imaginary;  
		}
		
		void operator - (ComplexNumber b)
		{
			ComplexNumber c ;
			c.real = b.real - this->real;
			c.imaginary = b.imaginary - this->imaginary;
		}
		
		void diplay()
		{
			cout << "Addition result:" << endl;
			cout << "Substraction result:"   << endl; 
		}
};



int main()
{
	cout << "Enter the real and imaginary part(1) +: " << endl;
	ComplexNumber a;
	
	cout << "Enter the real and imaginary part(2) +: " << endl;
	ComplexNumber b;
	
	a+b;
	a-b;
	return 0;
}

