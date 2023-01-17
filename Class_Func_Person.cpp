#include<iostream>

using namespace std;


class Person
{
	private:
		string name;
	public:
		void display(string a){
				name = a;		
				cout<<"Persons name is "<<name;		
						
						}	
};


int main(){
	
	
Person one;

one.display("Ozan");	
	
	return 0;
}
