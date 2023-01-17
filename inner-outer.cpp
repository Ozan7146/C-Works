#include<iostream>

using namespace std;

class 	Enclose{	
	public:
		class Inner{
			private:
				int number;
			public:
				getdata(){
					cout << "Enter Data:" ;
					cin >> number;
					
				}
				
				putdata(){
					cout << "The number is:" << number;
					
					
				}
		};
};


int main(){
	
	
	Enclose::Inner obj;
	obj.getdata();
	obj.putdata(); 
	
	return 0;
}
