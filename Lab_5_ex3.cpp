#include<iostream>

using namespace std;


class Sports {
	
	private:
		string Team;
		string name;
	
	public:
	Sports(string x){
		
		cout << x << " is created." << endl;
	}
	
	Sports(string a,string b)
	{
		cout << "Team:" << a << endl << "Player name:" << b << endl;
	}
	
	
	
};


int main(){
	
	
	
	Sports S1("Basketball");
	Sports S2("FB","Ozan");
	
	
	
	return 0;
}

