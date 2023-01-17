#include<iostream>

using namespace std;

class A
{
	public:
		
		void print()
		{
			cout << "A'nýn fonksiyonu" << endl;
		}

	
};




class C: virtual public A
{
	public:
		
		void print()
		{
			cout << "B'nin fonksiyonu" << endl;
		}
	
};


int main()
{
	
	C c;
	c.print();
	return 0;
}
