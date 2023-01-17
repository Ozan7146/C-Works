#include<iostream>

using namespace std;

class CompanyEmployees
{
	protected:
		
		string fullName;
		int age;
	
	public:
		
		CompanyEmployees(string fullName,int age)
		{
			this->age = age;
			this->fullName = fullName;
			
		}
	
		string getFullName()
		{
			return fullName;
		}
		
		int getAge()
		{
			return age;
		}
		
		virtual float calcSalary()=0;
		
		virtual ~CompanyEmployees()
		{
			cout << fullName << " is left the job at the age of " << age << endl;		
		}

		
};



class Managers : public CompanyEmployees
{
	private:
		
		int rank;
	
	public:
		
		Managers(string fullName,int age ,int rank) : CompanyEmployees(fullName,age)
		{
			this->rank = rank;			
		}
		
		float calcSalary()
		{
			return 5000 + (5000*rank)/2;
		}
		
		~Managers()
		{
			cout << getFullName() << " has left the management department at the age of " << getAge() << endl ;
		}
};




class Employees : public CompanyEmployees
{
	private:
	
		int year;	
		
	public:
	
		Employees(string fullName ,int age,int year) : CompanyEmployees(fullName,age)
		{
			this->year = year;	
		}	
		
		float calcSalary()
		{
			int a;
			a = year/5;
			return 2000 + a*1000; 
		}			

		~Employees()
		{
			cout << getFullName() << " has left being employee at the age of " << getAge() << endl;
		}

};

void Display(CompanyEmployees *c)
{
			
		cout<<"Name:"<<c->getFullName()<<", Age:"<<c->getAge()<<", Salary:"<<c->calcSalary()<<endl;

}


int main()
{
	
	CompanyEmployees *c[]={new Employees("Stephen Curry",32,2),new Managers("Kobe Bryant",42,3)};
			for(int i=0;i<2;i++)
	{
		Display(c[i]);
	}
	
	for(int i=0;i<2;i++)
	{
		delete c[i];
	}
	
	

	
	
	
	return 0;
}
