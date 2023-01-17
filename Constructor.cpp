#include<iostream>

using namespace std;


class Sports{
	
	
	public:
		string name;
		Sports(string name){
			cout<<name<<" is created"<<endl;
		}
	
	
};



int main()
{
	Sports S1("Basketball");
	return 0;
}
