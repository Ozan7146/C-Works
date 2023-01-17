#include<iostream>

using namespace std;

class A
{
	private:
		
		int count;
		int cv=8;
		
	public:
		
		A(){count = 0;}
		
		int operator ++()
		{
			count ++;
			return count;
		}
		
		friend istream& operator >>(istream&,A&); 
		friend ostream& operator <<(ostream&, A&);
		friend class B;
};
class B
{
	private:
		
		int c=9;
		
		
	public:
		int r;
		
		B operator +(A &a)
		{
			B res;
			res.r = a.cv + c;
			return res; 	
		}


};

istream& operator >> (istream& in, A &a1)
{
	in >> a1.cv;
	return in;
}

ostream& operator << (ostream& out, A &a2)
{
	out << a2.cv;
	return out;
}

int main()
{
	A a;
	B b,d;
//	cout << ++a << endl;
	
//	cout << "Enter cv value:" << endl;
//	cin >> a;
//	cout << a << endl;

	d = b+a;
	cout << d.r;
	
	return 0;
}
