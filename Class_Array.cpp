#include<iostream>

using namespace std;

class Student{
	public:
		char name[20],city[20];
		Student();
		string rename();
		string rename1();
};

Student::Student(){
	
	cout << "Enter name and city name: " << endl;
	cin >> name >> city;
}


string Student::rename()
{
 	return name;
}

string Student::rename1()	
{
	return city;
}

int main()
{
	
	
	Student s[3];
	
	for(int i=0;i<3;i++){
	
		cout << i+1 << " . one " << " Name: " << s[i].rename() << " City name: " << s[i].rename1() << endl;  
	}
	
	
	
	return 0;
}
