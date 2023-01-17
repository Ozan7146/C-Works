#include<iostream>

using namespace std;

class Mert{
//	private:

	public:
		string name;
		Mert(string x){
			name=x;
			
		}	
		
	
	
};

void cagir(Mert a){
	
	cout << a.name ;
	
	
}

int main(){
	
	Mert O1("ankara");
	cagir(O1);
	
		
	return 0;
	
}


