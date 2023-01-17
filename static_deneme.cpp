#include<iostream>

using namespace std;


class A{
		
		public:
			static void test(){
				cout << "Is it possible?" << endl;
				
				
			}
	
			void test1(){
				cout << "It is possible.";
				
			}
	
	
};


int main(){
	
	A O1;
	O1.test();
	
	A::test();
O1.test1();
	return 0;
}
