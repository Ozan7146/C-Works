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
		virtual void display() //virtual'ý görünce diyor ki "ben obje pointer'ýyým kendime gelmem lazým" b yüzden yerini tuttuðu class'ýn objesinin fonksiyonunu çaðýrýyor.
		{		//virtual olarak tanýmlamazsak baþta objesi olduðu class'ýn deðerlerini,fonskiyonlarýný çaðýrýyor,aþaðýdaki "b=&d" yi anlamýyor MAL.
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
