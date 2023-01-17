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
			cout << "A nýn destuctoru " << endl;
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
			cout << "B nýn destuctoru " << endl;
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
			cout << "C nýn destuctoru " << endl;
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
			cout << "D nýn destuctoru " << endl;
		}
};


int main()
{
	
	D d;
	
	return 0;
	
}




