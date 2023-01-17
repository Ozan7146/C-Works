#include<iostream>

using namespace std;



class Line{
	private:
		double length;
	public:
		Line(double x){
			length=x;
			
			cout<<"Object is being created."<<endl;
			cout<<"Length of line: "<<length<<endl;
				
				}
		
		
		~Line(){
			cout<<"Object is being deleted"<<endl;
				}
	
};



int main(){
	
	Line Obj1(6.0);

	
	
	return 0;
}
