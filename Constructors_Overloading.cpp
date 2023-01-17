#include<iostream>

using namespace std;


class Sports{
	private:
	string Team;
	string Player_Name;
	string name;		
	
	public:
		
		Sports(string name,string Team,string Player_Name){
			cout<<name<<" is created "<<" Team: "<<Team<<" Player Name: "<<Player_Name<<endl;
			cout<<endl;
		}
		Sports(string name,string Team){
			cout<<" Name: "<<name<<" Team: "<<Team<<endl;
			cout<<endl;
		}
	
		
};



int main()
{
	Sports S1("Basketball","Golden State Warriors","Stephen Curry");
	Sports S2("Volleyball","Chicago Bulls");
	return 0;
}
