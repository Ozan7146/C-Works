#include<iostream>

using namespace std;


void swap(int* str,int* str1){
	int z;
	z=*str;
	*str=*str1;
	*str1=z;
//	return *str,*str;
	
}


int main(){
	int a=33,b=77;
	
	swap(&a,&b);
	cout<<"new a ="<<a<<endl;
	cout<<"new b ="<<b<<endl;
	
	
	
	
	
	return 0;
}
