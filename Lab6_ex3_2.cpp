#include<iostream>
using namespace std;


class Date{
	
	public:
	int day,month,year;
	
	
	Date(){
		
		display();
	}	
	
	
	void display(){
		cout << day << month <<   year << endl; 
	}

};

class Person{
	private:
		string name;
		
	public:
		Date birthday;
		
		Person(string t,int x,int y,int z){
			name=t;
			birthday.day=x;
			birthday.month=y;
			birthday.year=z;
			}
	
	void display(){
		
		cout << "Name: " << name << endl;
	}
	
	
};


int main(){
	
	Person P1("Kobe",23,7,1978), P2("Stephen",14,3,1988);
	
	return 0;
}





