#include <iostream>

using namespace std;


class DigitalBookArchive{
	
	private:
		string name;
		string type;
		int digitalBookCount=20;
		
	public:
		
		DigitalBookArchive(string x)
		{
			name=x;
		}
				
		

		
		DigitalBookArchive(string x,string y)
		{
			name=x;
			type=y;
			cout<<"Digital Book Archive name set to "<<name<<endl;
			cout<<"Digital Book Type is: "<<type<<endl;
		}
		
		
	
		void print();
		string getName();
		void addBook();
		void readBook();
		 
};


void DigitalBookArchive::addBook()
{
	digitalBookCount=digitalBookCount+1;
}


void DigitalBookArchive::readBook()
{
	digitalBookCount=digitalBookCount-1;
}

string DigitalBookArchive::getName()
{
	return name;
}

void DigitalBookArchive::print()
{
cout<<"The number of remaining book is "<<digitalBookCount<<endl;	
}

int main() {
	char val;	
	do{
	
	string x,y;
	
	cout<<"Enter the name of Digital Book Archive"<<endl;
	cin>>x;
	cout<<"Enter the type of the digital book: "<<endl;
	cin>>y;	
    DigitalBookArchive B1(x);
	DigitalBookArchive B2(x,y);
	cout<<"Do you want to add or read a digital book (a/r),or enter (C) for exit the system: "<<endl;
	cin>>val;
	
	while(val!='C' || val!='c'){
	
	if(val=='a')
	{
	 B2.addBook();
	 cout<<"A new digital book is added."<<endl;
	
	 
	}
	else if(val=='r')
	{
	 B2.readBook();
	 cout<<"You've read a book"<<endl;
	 
	}
	 cout<<"Do you want to add or read a digital book (a/r),or enter (C) for exit the system: "<<endl;
	 cin>>val;
	if(val=='c' || val=='C')
	break;
	}
	B2.print();
	break;
	
	
	}while(val!='C' ||val!='c');
	
	
	return 0;
}


