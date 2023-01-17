#include<iostream>

using namespace std;


class Base
{
	private:
		
		int y;
	
	public:
		
		int GetY()
		{
			return y;
		}
		int SetY(int y)
		{
			
			this->y = y;
		}
	
};



class Derived : private Base
{
	
	private:
		
		int j;
	
	public:
		
		Derived()
		{
			//x=10;
			//y=20;
			print();
		}
		
		void print()
		{
			//cout << "x=" << x << "y=" << y << endl;
			
			Base::SetY(5);
			cout << Base::GetY() << endl;
			//cout << y << endl;
		}
	
};




int main()
{
	
	Derived d;
	
	
	
	return 0;
}
