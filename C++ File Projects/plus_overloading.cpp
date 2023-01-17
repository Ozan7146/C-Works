#include<iostream>

using namespace std;

class A
{
	private:
		
		int b ;
		
	public:
		
		A(int z)
		{
			b = z;
		}
		
		A operator + (A x)
		{
			A s(0);
			s.b = x.b + b;
			return s;
		}

		
		friend ostream& operator << (ostream&,const A&);
		
};
ostream &operator << (ostream &out,const A &t)
{
	out << t.b;
	return out;		
}

int main()
{
	
	
	A a(3),a1(34);
	
	 cout << a+a1;
	
	return 0;
}
