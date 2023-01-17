#include<iostream>

using namespace std;

class Student
{
	private:
	
		int studentId;	
	
	public:
		
		Student(int studentId)
		{
			this->studentId = studentId;
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
		
		Teacher(int registrationNo)
		{
			this->registrationNo = registrationNo;
		}
		
		int getRegistrationNo()
		{
			return registrationNo;
		}
};


class Assistant : public Student , public Teacher
{
	public:
		
		Assistant(int studentId , int registrationNo) : Student(studentId) , Teacher(registrationNo)
		{
			cout << "Student Id:" << getStudentId() << endl ;
			cout << "Registration Number:" << getRegistrationNo() << endl ;
		}

};


int main()
{
	
	Assistant obj(9753,987);
	
	//obj.getRegistrationNo();
	//obj.getStudentId();
	return 0;
}

