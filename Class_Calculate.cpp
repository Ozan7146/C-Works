#include<iostream>

using namespace std;


class Room{
	public:
		double length;
		double breadth;
		double height;
		
		double Area()
		{
			return length*breadth;
		}
		
		double Volume()
		{
			return length*breadth*height;
		}
	
	
	
};


int main(){
	
	Room calc;
	
	
	cout<<"Enter the length,breadth and height: "<<endl;
	cin>>calc.length;
	cin>>calc.breadth;
	cin>>calc.height;
	
	cout<<calc.Volume()<<endl;
	cout<<calc.Area()<<endl;
	return 0;
}
