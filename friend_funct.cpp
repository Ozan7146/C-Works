#include<iostream>

using namespace std;

class Distance{
	
	private:
		
		static int meter;
	
	public:
		void hello(){cout <<" Hello" << endl;}
		friend int func(Distance d);
		friend class Close;
};

int Distance::meter = 5;

class Close{
	private: 
	
	int x;
	
	public:
	
	Close(Distance b)	
		{
			cout << "meter 1:" << b.meter << endl;
			b.hello();
	
		}
	
		void show()
		{
			Distance a;
			cout << "meter 2" << a.meter << endl;}
			
	
};

int func (Distance d){
	d.hello();
	return d.meter;
}


int main()
{
	
	Distance D;
	Close c(D);
	c.show();
	
	//c.show();
	cout << "Distance:" << func(D);
	return 0;
}
