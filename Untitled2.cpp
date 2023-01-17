#include<iostream>

using namespace std;


template <class temp>
temp add(temp a,temp b)
{	
	return a+b;
}


int main(){
	double y=8.7,x=9,z;	
	z=add(x,y);
	cout << z <<endl;
	
	
	return 0;
}




