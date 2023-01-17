#include <iostream>

using namespace std;


class Base
{
	public:
		
		Base()
		{		
			cout << "Hello!!!!!!!!!!!" << endl;
		}

};



class Derived : public Base 
{
	
	public:
	Derived()
	{
		cout << "Derived bos constructor." << endl;
	}
	
	Derived(int i)
	{
		cout << "Derived dolu constructor." << endl;
	}
};


int main()
{
	
	
	Derived d;
	Derived d1(4);

	return 0;
	
}

