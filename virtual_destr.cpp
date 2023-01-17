#include<iostream>

using namespace std;

class A{
	
	public:
		
		A()
		{
			cout << "A cons" << endl;
		}
		virtual ~A()
		{
			cout << "Base class destructor " << endl;
		}
		void print()
		{ cout << "hello 1" << endl;
		}
};

class B : public A
{
	public:
		B()
		{
			cout <<"b cons" << endl;
		}
		~B()
		{
			cout << "Derived class destructor " << endl;
		}
		void print()
		{cout << "Hello 2" << endl;
		}
};

int main()
{
	A *a = new B;
	//B *b = new B
	
	//a->print();
	delete a;
	
	return 0;
}
