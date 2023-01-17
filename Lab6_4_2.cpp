#include<iostream>

using namespace std;

class Address
{
	public:
		
		string addressLine;
		string city;
		string state;
	
		
		Address(string a,string b,string c)
		{
			addressLine = a;
			city = b;
			state = c;
		}
		
	
};


class Employee
{
	private:
		
		 Address *address_1 ;
	
	public:	
		
		int id;
		string name;
		
		Employee(int a,string b, Address *c)
		{
			id = a;
			name = b;
			address_1 = c  ;
			
		}

		void display()
		{
			cout << id << " " << name << " " << address_1->addressLine << " " << address_1->city<< " " << address_1->state; 
		}

};




int main()
{
	
	Address a1("Bahcelievler 7. Cadde","Ankara","TR") ; 
	Employee e1 = Employee(225,"Bobo",&a1); 
	
	e1.display();
	return 0;

}



