#include <iostream>

using namespace std;

//+ operator overloading


class A{
	public:
		static int x;
	public:
	//class içinde operator overloading yaptýk.
	A operator + (A a){
		A new_A;
		new_A.x = a.x + x; 
		return new_A;
	}
	
};

int A::x = 5;



int main(){
	
	A a1,a2;
	A a3;
	a3 = a1 + a2;
	cout << a3.x << endl;
	
	return 0;
}

