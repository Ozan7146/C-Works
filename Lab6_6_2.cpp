#include<iostream>

using namespace std;

class Square{
	private:
		int side;
	public:
	
	Square(){
	cout << "Enter the side of the square:" << endl;
	cin >> side;
	}	
	friend class Increment;
};

class Increment{
	private:
	int i;
	public:
		Square b;
	Increment(){
				cout << "Enter the increment value:" << endl;
		cin >> i ;
		change();		
	}
		void change(){		
			b.side=b.side+i;
			cout << "Side of the square is:" << b.side <<endl;
		}
	
};
int main(){

	Increment d;
	return 0;
}
