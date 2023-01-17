#include<iostream>

using namespace std;


class A{
	public:
		int x;
	
	
};


class B{
	protected:
		 int y;
	public:
		void getY1(){
			cout << "Last value of y:" << y << endl;
		}	 
	
};


class C{
	private:
		int z;
	public:
		void change(int x){
			z=x;
			cout << z;
		}	
	
};


class D:public A,public B,public C{
	
	
	public:
		D(){
			change(5);
			
		}
			
		
	
	
};

int main(){
	D d;
	return 0;
}
