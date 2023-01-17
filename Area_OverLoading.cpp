#include<iostream>
#define PI 3.14

using namespace std;


int area(int a,int b)
{	
	return a*b;
}

double area(double a)
{
	return 2*PI*a;
}

double area(double a,double b)
{
	return (a*b)/2;
}



int main()
{

cout<<"Area of rectangle = "<<area(3,4)<<endl;
cout<<"Area of circle = "<<area(3.5)<<endl;
cout<<"Area of triangle = "<<area(3.5,2.5)<<endl;




return 0;
}
