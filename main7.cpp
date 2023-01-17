#include <iostream>
#define pi 3.14
#include<math.h>
using namespace std;

int calculate(int a,int b){
	return a*b;
	
}

double calculate(double x){
	return pi*pow(x,2);
} 

double calculate(double vertical,double side){
	return (vertical*side)/2;
	
}


int main() {
	double n,m;
	int k,l;
	cout<<"Enter the rectangles two sides:"<<endl<<"Enter the circle one side:"<<endl<<"Enter the triangle two sides(vertical,side):"<<endl;
	cin>>k>>l>>m>>s>>n;
	cout<<calculate(k,l)<<endl;
	cout<<calculate(m)<<endl;
	cout<<calculate(s,d);
	return 0;
}

