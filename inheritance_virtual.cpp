#include<iostream>

using namespace std;

class A
{
	public:
		/*
		 A()
		{ 
			 cout << 11 << endl;
		}
		
		virtual  ~A()
		{
			cout << "A's destructor " << endl;
		}
		*/	
		virtual void display() //virtual'� g�r�nce diyor ki "ben obje pointer'�y�m kendime gelmem laz�m" b y�zden yerini tuttu�u class'�n objesinin fonksiyonunu �a��r�yor.
		{		//virtual olarak tan�mlamazsak ba�ta objesi oldu�u class'�n de�erlerini,fonskiyonlar�n� �a��r�yor,a�a��daki "b=&d" yi anlam�yor MAL.
			cout << "Content of Base Class" << endl;
		}
};

class B : public A
{
	public:
		
	/*	B()
		{
			cout << 12 << endl;
		}
		
		 ~B()
		{
			cout << "B's destructor " << endl;
		}
		*/
		
		void display()
		{
			cout << "Content of Derived Class" << endl;
	}		
};

int main()
{
	A *b,c;
	B d; 
	
	b = &c;
	b->display();
	
	b = &d;
	b->display();








//	b->display();
	//b->~A();
	//d.~B();
	return 0;
}
