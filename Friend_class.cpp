#include<iostream>

using namespace std;

class A
{
	private:
	
		int x = 5;
		float y = 1.2;
	
	
		friend class B;
		friend void outside_func();
};

void outside_func()
{
	A a1;
	cout << a1.x << endl;	
}  



class B
{
	public:
		
		void getX()
		{
			A a;
			cout << a.x << endl; 
		}
		
		void getY(A b)
		{
			
			cout << b.y << endl;
		}

};



int main()
{
	
	B b;
	A c;
	b.getX();
	b.getY(c);
	outside_func();
	return 0;
	
}
