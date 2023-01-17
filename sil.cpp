#include<iostream>

using namespace std;
class A
{
	protected:
		
		int x = 2;
	
	private:
		
		int y = 3;
	
	public:
		
		int z = 4; 	
		
};


class B : public A
{
	
	protected:
		
		float a = 2.1;
	
	private:
		
		float b = 3.2;		

};


class C : public B
{
	public:
	C()
	{
		cout << x << "\n" << z;
	}
	

};




int main()
{
	
	C c;
	
	return 0;
}
