#include<iostream>

using namespace std;
	
	
class Line{
	
	private:
		
		double length;
		
	public:
	
		void getlength(double x);
		double print();	
		Line();
		~Line();
	
		

};	



Line::Line()
{
	cout << "Object being created." << endl;
}


void Line::getlength(double x)
{
	length=x; // x deðerini fonksiyonun dýþýnda da kalýcý hale getirmek istedik o yüzden eþitledik.
}

double Line::print()
{
	return length;
}

Line::~Line(void)
{	
	cout << "Object being destructed." << endl;	
}



int main(){
	
	Line O1;
	O1.getlength(6);
	cout << "length: "<< O1.print() <<endl;
	return 0;
}
