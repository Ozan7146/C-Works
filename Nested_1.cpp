#include<iostream>

using namespace std;


class Nested
{
	private:
		
		static int x ;
	protected:
		static int y;	

	public:
		static int z;
		
		Nested()
		{
			cout << "Hello " << endl;
				
		}
		
		class Inner
		{
			private:
				
				int a = 5;
				
			public:
				
				
				Inner()
				{
					cout << x << a << y << z;
					Nested v;
					v.getInner();
					//Nested::getInner();
				}
				
				void getx()
				{
					cout << "Inner function " << endl; 
				
				}
	
		};
		
		void getInner()//d��taki class i�teki class'�n private ve public de�erlerine ula�amaz
		{
		
			cout << "Nested function " << endl;
		
			
		//	cout << a << endl ; // buna ula�amaz
		}

};

int Nested::x=3;
int Nested::y=2;
int Nested::z=99;
int main()
{
	
	//Nested b;
	Nested::Inner a;
	a.getx();
	Nested b; 
	b.getInner();
	return 0;
}
