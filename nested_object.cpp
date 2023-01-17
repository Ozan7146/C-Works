// nested class examples

#include<iostream>

using namespace std;


class Base{
	
	private:
		string name = "Base";	
	public:
		class Derived{
			protected:
				string name = "Derived";
		};
		void print(){
			Derived a;		
			cout << "Base name:" << name << endl << "Derived name:" << a.name;   
		}
};

int main()
{
	Base x;	
	
	return 0;
}
