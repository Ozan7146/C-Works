#include<iostream>
using namespace std;


class Ozan 
{
	protected:
		
		int a=4;
	
	public:
	
		void hel()
		{
			cout << "Hello" ;
		}
			

};



class Burak 
{
	public:
		
		Ozan obj;
		Burak()
		{
			 obj.hel() ;
			 
		}
		


};

int main()
{
	
	Burak a;
	return 0;
}
