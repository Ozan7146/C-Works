#include <iostream>

using namespace std;


class A{
	
	public:
		A()
		{
			cout << "A consutructoru" << endl;
		}
		~A()
		{
			cout << "A n�n destuctoru " << endl;
		}
};

class B: public A{
	
	public:
		B()
		{
			cout << "B consutructoru " << endl;
		}
		~B()
		{
			cout << "B n�n destuctoru " << endl;
		}
};

class C : public B{
	
	public:
		C()
		{
			cout << "C consutructoru" << endl;
		}
		~C()
		{
			cout << "C n�n destuctoru " << endl;
		}
};

class D: public C{
	
	public:
		D()
		{
			cout << "D consutructoru " << endl;
		}
		~D()
		{
			cout << "D n�n destuctoru " << endl;
		}
};


int main()
{
	
	D d;
	
	return 0;
	
}




