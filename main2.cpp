#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
char number;
	do{
		
		
	int side1,side2,side3;
	
	
	cout<<"Enter the two side of triangle"<<endl;
	cin>>side1>>side2;
	cout<<"Enter the hypontenus of the triangle:"<<endl;
	cin>>side3;
	if(pow(side1,2)+pow(side2,2)==pow(side3,2))
	{
		cout<<"Perpendicular Triangle"<<endl;
	}
	
	
	
		cout<<"Do you want to continue y/n:"<<endl;
	cin>>number;
	
	
	}while(number=='y');
	
	
	
	
	
	return 0;
	
}
