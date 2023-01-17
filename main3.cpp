#include <iostream>
using namespace std;

int main() {

int age,day;
cout << "Enter the age of the children:" ;
cin >> age ;
cout << "Enter the day you want to stay:" ;
cin >> day ;

	if(age<5)
	{
		cout << day*2*150 << endl;
	} 
	
	
	else if(5<=age || age<=10)
	{
		cout << day*2*150+100*day << endl;		
	}
	
	else
	{
		cout << day*3*150 << endl;
	}
	
	return 0;
}
