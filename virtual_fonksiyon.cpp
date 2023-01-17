#include<iostream>

using namespace std;


class Person
{
		public:
			
			  void attack()
			{
				cout << "Diger classta yoksa buradan almistir" << endl;
			}


};


class A1 :  public Person{
	
	public:
		
		 virtual void attack()
			{
				cout << "A1 classindaki" << endl;
			}
};


int main()
{
	A1 a1;
	Person *p;
	p = &a1;
	p->attack();
	return 0;
}
