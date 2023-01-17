#include<iostream>

using namespace std;

class A
{
	public:
		
		A()
		{
			cout << "A's constructor " << endl;
		}
		
		~A()
		{
			cout << "A's destructor " << endl;
		}

};



class B : public A
{
	public:
		
		B()
		{
			cout << "B's constructor " << endl;
		}
		
		~B()
		{
			cout << "B's destructor " << endl;
		}
			


};

class C : public B
{
	public:
	
		C()
		{
			cout << "C's constructor " << endl;
		}
		
		~C()
		{
			cout << "C's destructor " << endl;
		}
		
};

int main()
{

	C c;
	return 0;
}
