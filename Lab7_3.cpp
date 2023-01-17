#include<iostream>

using namespace std;

class ComplexNumber
{
	private:
	
		float real;
		float imaginary;
	
	public:
		
		ComplexNumber(){}
		
		ComplexNumber(float real, float imaginary)
	    {
	    	this->real = real;
	    	this->imaginary = imaginary;
	    }
		
		ComplexNumber operator + (ComplexNumber a)
		{
			ComplexNumber c;
			c.imaginary = a.imaginary + this->imaginary;
			c.real = a.real + this->real ;
			return c;
		}
		
		ComplexNumber operator - (ComplexNumber a) 
		{
			ComplexNumber c;
			c.imaginary = a.imaginary - this->imaginary ;
			c.real = a.real - this->real ;			
			return c;
		}
		
		void display()
		{
			cout << "Addition Result:" << this->real << "+" << this->imaginary << "i" << endl;
		}
		
};

int main()	
{
	float x,x1,y,y1;

	cout << "Emter the real and imaginary part:" << endl;
	cin >> x >> y >> x1 >> y1;
	ComplexNumber a1(x,y),b1(x1,y1);
	ComplexNumber c1;

	c1 = a1 + b1 ;
	c1.display();
	c1 = a1 - b1 ;
	c1.display();
	
	return 0;	
}
