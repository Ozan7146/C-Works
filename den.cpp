#include<iostream>

using namespace std;



int swap2(int r,int z){

int temp;
temp = r;
r= z;
z=temp;	

return z;

	
}



int main(){
int r=3,z=5;

cout<<"r is "<<r<<endl<<"z is "<<z<<endl;

swap2(r,z);

cout<<"r is "<<swap2(r,z)<<endl<<"z is "<<swap2(r,z); 
	
	return 0;
}

