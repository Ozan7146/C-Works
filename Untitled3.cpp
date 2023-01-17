#include<iostream>
#include<math.h>

using namespace std;




int abs(int a){
	
	if(a<0)
	{
	a=a+(2*(-a));
	}	
	
	return a;
}

float abs(float a){
	
	if(a<0)
	{
	a=a+(2*(-a));
	}	
	
	return a;
}





int main(){
	
	int x=3;
	float y=-5.4;
	float d,e;
	d=abs(x);
	e=abs(y);
	cout<<d<<endl;
	cout<<e<<endl;
	return 0;
}


