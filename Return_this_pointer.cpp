#include<iostream>

using namespace std;


class Pointer
{
	private:
		
		int a,b;

	public:
	
	Pointer getA(int x)
	{
		b = x;
		return *this;
	}
		
/*	Pointer &getThis(int b)
	{
		a = b ;
		return *this;	
	}	 
	void print()
	{
		cout << b << endl;
	}*/
friend ostream &operator << (ostream &out,Pointer &ob);
};

	
	 ostream &operator << (ostream &out,Pointer &ob)
	{
		out << ob.b;
		return out;
	}

int main()
{
	
	int x;
	Pointer p,p1;
	p = p1.getA(11);
	cout << p;
	 

	//p1.print();
	return 0;
}
