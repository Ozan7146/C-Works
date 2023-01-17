#include<iostream>

using namespace std;


double over(int a,double b){
	cout<<"First"<<endl;
	return a+b;
	
}


double over(double a,int b){
	cout<<"Second"<<endl;
	return a+b;
	
}


double over(double a,double b){
	cout<<"Third"<<endl;
	return a+b;
}




int main(){
	


cout<<over(3,2.6)<<endl;
cout<<over(2.6,3)<<endl;	
cout<<over(2.6,6.5)<<endl;	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
	
}
