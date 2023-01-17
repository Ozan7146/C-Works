#include<iostream>

using namespace std;

void swap(double &x,double &y){

double temp;
temp=x;
x=y;
y=temp;

}

void swap1(double *x,double *y){
	
	
double temp;
temp= *x;
*x= *y;
*y=temp;	
	
}



	



int main(){
double a=4.5,b=6.7;
cout<<"First number a is "<<a<<endl;
cout<<"Second number b is "<<b<<endl; 
	cout<<"____________________________________"<<endl;

swap(a,b);
cout<<"a is "<<a<<endl<<"b is "<<b<<endl; 
	
	cout<<"____________________________________"<<endl;
		
swap1(&a,&b);
cout<<"a is "<<a<<endl<<"b is "<<b<<endl; 	


	
	return 0;
}

