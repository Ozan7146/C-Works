#include<iostream>
using namespace std;


class deneme{
	private:
		int num;

	public:
		
		
		void operator - (int a){
			
			a=-a;
			num=a;
		}
	
		void print(){
			
			cout << num << endl; 
		}	
	
};





int main(){
	
	deneme O1;
	O1.operator -(20);
	O1.print();
	return 0;
}
