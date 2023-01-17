#include<iostream>

using namespace std;


void swap(int *k,int *l){
	int temp;
	temp= *k;
	*k = *l;
	*l=temp;
	cout<<"swap result is:"<<*k<<*l<<endl
	
	
}


int main(){
	
	
	
	int *a=4,*b=5;
	swap(a,b);
	
	
	
	return 0;
}
