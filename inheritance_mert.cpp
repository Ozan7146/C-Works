#include<iostream>

using namespace std;

class A{
	
	public:
		
		static int x ;
	public:
		int func()
		{
			cout << "hello ";
		} 
	
};
int A::x = 5;

class B: public A{
	private:
		int y=89;
	
	public:
		
			
		B()
		{
			
			cout << y;
			func();
			cout << x;
		}
	
};

int main()
{
	B b;
	
	return 0;
	
}
