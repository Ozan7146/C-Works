#include<iostream>

using namespace std;


class Country{
	
	private:
		string name;
	
	public:
		Country(string x){
		
			cout << x << " is created" << endl;	
			name=x;
		}
		
		Country(string x,int y){
			
			cout << x << " is created with " << y << " number of cities." <<endl;	
			name=x;
		}
		
		Country(string x,int y,int z){
			
			cout << x << " is created with " << y << " number of cities and " << z << " populations." <<endl;	
			name=x;		
		}
	
	
		~Country(){
			
			cout << name << " is fell down." << endl;
		}
	
};




int main(){
	
	
	
	Country O1("Turkey");
	Country O2("Germany",79);
	Country O3("Brazil",17,214000000);
	
	
	
	
	
	
	
	
	
	return 0;
}
