#include<iostream>
using namespace std;




class Date {
	
	private:
		int day,month,year;
	public:
	
	void Display();	
	
	Date(int a,int b,int c){
		day=a;
		month=b;
		year=c;
		Display();
	}	
	
		
};

void Date::Display(){
	cout << day << "/" << month << "/" << year << endl ;
}

class Person {
	private:
		string name;
	public:	
		void Display();	
	
		Person(string n,int x,int y,int z){
		name = n;
		Display();
		Date birthday(x,y,z);
					
		}
		
		
	
};

void Person::Display(){

cout << name << " ";

}




int main(){
	
	Person P1("Kobe",23,7,1978);
//	P1.Display();
	Person P2("Stephen",14,3,1988);
//	P2.Display();
	
	
	
	
	
	return 0;
}
