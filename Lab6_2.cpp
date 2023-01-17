#include<iostream>

using namespace std;

class employee
{
	
	private:
		string name;
		int salary;
		string position;
		
	public:
	
	employee()
	{
	cout << "Enter the name: " ;
	cin >> name;
	
	cout << "Enter the position: " ; 
	cin >> position;
	
	cout << "Enter the salary: " ;	
	cin >> salary;
	
		
	}
	
	void getposition()
	{
		
	} 
			
};



	int main()
	{
		string raise;
		cout << "Add employees:" << endl;	
		employee emp[3];
		cout << "Enter the position the employees to raised:" << endl;
		cin >> raise;
		return 0;
	}
