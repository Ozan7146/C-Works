#include<iostream>

using namespace std;


class Ptr{
	
	
	private:
	static	int x,y;
	
	public:
		
	
		void the(int x,int y)
		{
			
			cout << " x:" << this->x << " y:" << this->y << endl;  
			this->x=x;
			this->y=y;
			
		}
		
		void print()
		{
			cout << " x:" << x << " y:" << y ;
		}
	
};
 int Ptr::x=12;
 int Ptr::y=21;


int main(){
	Ptr O1;
	O1.the(15,24);
	O1.print();
	
	return 0;
}
