#include<iostream>

using namespace std;



class Line{
	private:
		double length;
		
	public:

		void setLength(double x);
		double GetLength();
		Line();
		~Line();	
};

Line :: Line(void) 
{				
cout<<"Object is being created."<<endl;
}

	
void Line :: setLength(double x){
	length=x;
}
double Line :: GetLength()
{
	return length;
}

Line:: ~Line(void)
{	
cout<<"Object is being deleted"<<endl;
}






int main(){
	
	Line Obj1;
	Obj1.setLength(6.0) ;
	cout<<"Length of line: "<<Obj1.GetLength()<<endl;

	
	return 0;
}
