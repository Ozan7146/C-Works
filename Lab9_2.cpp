#include<iostream>
#include<string.h>
using namespace std;


class Person
{
	private:
	
		string name;
		string surname;
		int age;
		int starvationRate;
	
	public:
		string FullName;
		
		Person(string name, string surname , int age)
		{
			this->name = name;
			this->surname = surname;
			this->age = age;		
			starvationRate = 100;
		}
			
		
		
		string getName()
		{
			return name;
		}
		
		string getSurname()
		{
			return surname;
		}

		string getFullName()
		{
			FullName = name + surname;
			return FullName;
		}

		int getAge()
		{
			return age;
		}
		
		void setAge(int ag)
		{
			age = ag;
		}
		
		int getStarvationRate()
		{
			return starvationRate;
		}
		
		void setStarvationRate(int value)
		{
			starvationRate = value ;
		}

		bool checkStarvation()
		{
			if(starvationRate < 20 )
			{
				return true;
			}
			
			else return false;
		}
		
		~Person()
		{
			cout << getFullName() << "left the hospital" << endl;
		}


};	




class Patient : public Person
{
	private:
		
		string illnessName;

	public:
		
		Patient( string illnessName,string name , string surname, int age ) : Person(name,surname,age)
		{
			setIllnessName();
		}
			
		void setIllnessName()
		{
			this->illnessName = illnessName;
		}
		
		bool checkStarvation()
		{
			if(getStarvationRate() < 50)
			{
				return true;
			}
			
			else return false;	
		
		}
		
		void takeACare()
		{
			double value = getStarvationRate() - 15 ;
			setStarvationRate(value);
			if (this->checkStarvation() == true )
			{
				cout << getFullName() << "is hungry" << endl;
			}
			
			
		}
		
		~Patient()
		{
			cout << getFullName() << "is discharged" << endl;
		}
};




class Employee : public Person
{
	private:
		
		int employeeId;
		
	public:
		
		Employee(string name, string surname, int age, int employeeId) : Person(name,surname,age)
		{
			this->employeeId = employeeId;
			checkPatient();
		}
		
		int getEmployeeID()
		{
			return employeeId;
		}
		
		bool checkStarvation()
		{
			if(getStarvationRate() < 20)
			{
				return true;		
			}
			
			else return false;
		}

		void checkPatient( )
		{
			double value = getStarvationRate() - 5 ;	
			setStarvationRate(value);
			cout << "The patient named " << getFullName() << "is checking"  << endl;;
			
			if(this->checkStarvation() == true ) 
			{
				cout << getFullName() << "is starving" << endl; 			
			}
		
		
		}
		
		~Employee()
		{
			cout << getFullName() << "quit the job" ;
			cout << endl;
		}



};


class Nurse : public Employee 
{
	public:
		
		Nurse(string name , string surname, int age, int employeeId) : Employee(name,surname,age,employeeId) 
		{
				
				
		}
		
		void checkPatient()
		{
			double value = getStarvationRate() - 10;
			setStarvationRate(value);
			cout << "the patient name " << getFullName() << "is checking";
			cout << endl;
			//takeACare();
			cout << getFullName() << "took care of the patient" << endl;
			if(checkStarvation() == true)
			{
				cout << getFullName() << "is starving" << endl;
			}
		}
		
		~Nurse()
		{
			cout << getFullName() << "is quit being nurse" << endl;
		}
	
};


class Doctor : public Employee 
{
	public:
		
		Doctor(string name, string surname,int age,int employeeId) : Employee(name,surname,age,employeeId)
		{
			
			
		}
		
		void checkPatient(Patient c)
		{
			double value = getStarvationRate() - 5;
			setStarvationRate(value);
			cout << getFullName() << "is checking" << endl ;
			c.takeACare();
			cout << getFullName() << "gives medicine to the patient" <<endl;
			if(checkStarvation() == true)
			{
				cout << getFullName() << "is starving" << endl;
			}
		}
		
		~Doctor()
		{
			cout << getFullName() << "quit being doctor" << endl;
		}

};



int main()
{
	
	Doctor D("Johhny" , "Depp" , 56 , 150717 );
	Nurse N("Lauren" , "Jackson" , 38 , 971174);
	Patient P("Something" , "stephen" ,  "curry",32) ;
	
	
	cout << N.getFullName() << endl;
	N.checkPatient();
	
	cout << D.getFullName() << endl;
	D.checkPatient(Patient b);
//	cout << P.getFullName() << endl;
	
	return 0;
}


