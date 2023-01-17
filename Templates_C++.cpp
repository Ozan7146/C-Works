#include<iostream>

using namespace std;



template <typename New>
New sum(New x,New y){
	
	New result;
	result=x+y;
	return result;
	
}

int main(){

cout<<sum(2.4,3.5)<<endl;
		
	return 0;
}
