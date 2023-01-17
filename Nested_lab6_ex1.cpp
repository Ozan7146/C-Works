#include<iostream>

using namespace std;

class Enclose{
	
	public:
	
	class inner{
		private:
			int number;
		
		public:
			int getData(int x){
				number=x;
			}	
			
			int putData(){
				return number;
				//cout << "The number is: " << number <<endl;
							}
		
	};
};


int main(){
	
	
	
		Enclose::inner O1;
		O1.getData(6);
		
		cout << "The number is: " << O1.putData() << endl;
	
	return 0;
}
