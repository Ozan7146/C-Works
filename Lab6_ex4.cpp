#include<iostream>
using namespace std;



class Address{
	private:
		string city,state,addressLine;
		
	public:
		Address(string x,string y,string z)
		{
		addressLine=x;
		city=y;
		state=z;
		get();
		}	
	
		void get(){
		
			cout << addressLine << " " << city << " "  << state << endl;
		}
					


};


class Employee{
	private:
		Address *address_1;
	public:
		int id;
		string name;
		
		Employee(int a,string b,Address *address1){
			
			
			id=a;
			name=b;
			address_1=address1;
		}
		
		void display(){
			cout << id << endl << name << endl; 
		}

};



int main(void){

 
Address a1= Address("Bahcelievler 7. Cadde","Ankara","TR"); 

Employee e1 = Employee(225,"Bobo",&a1); 

e1.display();


return 0;
 }

