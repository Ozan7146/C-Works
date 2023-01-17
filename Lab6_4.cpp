#include<iostream>

using namespace std;


class Address{
	
	private:
		string addressLine,city,state;
	public:
		Address(string x,string y,string z){
			addressLine=x;
			city=y;
			state=z;
					
		
		}
		string getCity()
		{
			return city;
		}
	
	
};


class Employee{
	private:
		Address *address_1;
		int id;
		string name;
	public:
		Employee(int i,string n,Address *a1){
			id=i;
			name=n;
			address_1=a1;
			
		}
		void display(){
			cout << id << name << address_1->getCity();
		}
	
	
};





int main() 
{ 
Address a1= Address("Bahcelievler 7. Cadde","Ankara","TR"); //çalýþýyorsa sil
Employee e1 = Employee(225,"Bobo",&a1); 
e1.display();
return 0;
}

