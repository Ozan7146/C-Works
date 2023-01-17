#include<iostream>

using namespace std;


class Staff
{
	public:
		
		void display()
		{
			cout << "Staff" << endl;
		}
		
	
};

class Person
{
	public:
		
		void display()
		{
			cout << "Person " << endl;
		}
	

};

class Typist : public Staff , public Person
{
	public:
		
		void display()
		{
			cout << "Typist" << endl;
		}
	
};


int main()
{
	
	
	Typist t;
	t.display();
	
	
	return 0;
}
