#include<iostream>

using namespace std;

class Emp{
	
	private:
		string name;
		int salary;
		string position;
		
	public:
		
		void add(string x,string y,int z){
			
			name=x;
			position=y;
			salary=z;
			
		}
	
		void increase(int r){
			
			salary=salary+((salary*r)/100);
			
		}
		
		void print(){
			cout << "Employees name: " << name << endl << "Position: " << position << endl << "Salary: " << salary << endl;
		
		}		
		
	
		string pos(){
			return position;
		}
	
};


int main(){
	int count;
	string x,y,raised_person;
	int z,raise;
	
//	cout << "How many person would you like to add: " << endl;
//	cin >> count ;
	Emp person[3];
	
	cout << "Add Employees:" << endl;
	
	for(int i=0;i<3;i++){
		cout << "Enter employees name: " << endl;
		cin	>> x;
		cout << "Enter the position: " << endl;
		cin >> y;
		cout << "Enter the salary: " << endl;
		cin >> z;
		person[i].add(x,y,z);
		
	}
	
	cout << "Enter the raise percantage: " << endl;
	cin >> raise ;
	cout << "Enter the position of the employees to raised: " << endl ;
	cin >> raised_person;
	cout << "Before raise:" << endl;
	for(int s=0;s<3;s++)
		{
		
		person[s].print();
		}
			
	for(int i=0;i<3;i++)
	{
	
		if(raised_person==person[i].pos())
		{	
			person[i].increase(raise);
		}
		
	}
	
	 
	 	cout << "------------------------------" << endl;
	 	cout << "After raise:" << endl;
		
		for(int i=0;i<3;i++)
		{
			person[i].print();
		}
		
	
	return 0;
}
