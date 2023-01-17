#include<iostream>


using namespace std;


int abs(int x)
{
	
	if(x<0)
	{
		x=-x;
	}
	return x;
}

float abs(double x)
{
	if(x<0){
		x=-x;
	}
	
	return x;
}

int main(){
	
	
	cout<<abs(-3)<<endl;
	cout<<abs(5)<<endl;
	cout<<abs(-7.6)<<endl;
	cout<<abs(6.7)<<endl;
	
	
	
	return 0;
}
