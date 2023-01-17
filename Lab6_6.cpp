#include<iostream>

using namespace std;

class Square{
	private:
		int static size;
	public:
		friend class Increment;
	
	
};

int Square::size=2;

 class Increment{
	
	private:
	int x;
	
	public:
	Square new_size;
	Increment(){
		cout << "side of square is: " << new_size.size << endl;	
		cout << "Enter the increment value: " ;	
		cin >> x;
		cout << "\n";
		change();
			}
			
	void change(){
		
		new_size.size=new_size.size+x;
		cout << "new side of square is: " << new_size.size;
	}

};



int main(){
	
	Increment O1;
//	O1.change();
	return 0;
}
