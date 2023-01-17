#include<iostream>
using namespace std;

class PlayerInformation{
	
	public:
		string name;
		string surname;
		int age;
		
		void player(){
		
		cout<<"Name: "<<name<<" Surname: "<<surname<<" Age: "<<age<<endl;
	}
};



int main(){
	
	PlayerInformation Player1;
	
	
	Player1.age=19;
	Player1.name="Ozan";
	Player1.surname="Celik";
	Player1.player();
	
	return 0;
}
