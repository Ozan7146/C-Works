#include<iostream>

using namespace std;

class Student
{
	private:
		
		int studentId;
	
	public:
		
		Student(int id)
		{
			studentId = id; 
		}
		
		int getStudentId()
		{
			return studentId;
		}
		
	
};

class Teacher
{
	private:
		
		int registrationNo;
		
	public:
		
		Teacher(int No)
		{
			registrationNo = No;
		}
		
		int getRegistrationNo()
		{
			return registrationNo;
		}

};



class Assistant : public Teacher , public Student 
{
	public:
		
		Assistant(int id,int No) : Teacher(No) , Student(id)
		{
			cout << "Student id:" << getStudentId() << endl;
			cout << "Registration Number:" << getRegistrationNo() << endl;
		}
		
		





};


int main()
{
	
	Assistant a(9753,987);
	
	
	
	
	return 0;
}
