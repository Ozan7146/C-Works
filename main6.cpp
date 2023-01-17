#include <iostream>


using namespace std;



double add(int a,double b);
double add(double a,int b);
double add(double a,double b);
int main() {



int x=3;
double y=2.7,z=4.3;

cout<<add(x,y)<<endl;
cout<<add(y,x)<<endl;
cout<<add(y,z)<<endl;
	return 0;
}

double add(int a,double b)
{
return a+b;	
}


double add(double a,int b)
{
return a+b;	
}

double add(double a,double b)
{
return a+b;	
}
