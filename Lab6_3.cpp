#include<iostream>

using namespace std;


class Date{
	private:
		int day,month,year;
	public:
		Date(int x,int y, int z){
			day=x;
			month=y;
			year=z;
			display();
			
		}		
		void display(){
			
			cout << day << "/" << month << "/" << year << endl;
		}	
	
};



class Person{
	private:
		string name;
	public:
			
		Person(string a,int b,int c,int d){
			name=a;
			display();
			Date birthday(b,c,d);
			
		}
		
			
		
		void display(){
			cout << name << " "; 
		}
	
};




int main(){
	
	
	
	Person P1("Kobe",23,7,1978);
	Person P2("Stephen",14,3,1988); 
	

	
	
	return 0;
}





