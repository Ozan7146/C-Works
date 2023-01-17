#include<iostream>

using namespace std;

class Cube{
	
	private:
		double length;
		double breadth;
		double height;
		
	public:
		static int objectCounter;
		
		Cube(double x,double y,double z){
		length=x;
		breadth=y;
		height=z;		
		
		cout << "Constructor called" << endl; 
		objectCounter++;	
		}
		
		double Volume()
			{
			return height*breadth*length;;		
			}
		
		void Compare(){
			
			if((this->vol)< vol)
			{
			cout << "Cube1 is bigger than Cube2 " << endl;
			}
		
			else if((this->vol)>vol)
			{
				cout << "Cube2 is bigger than Cube1 " << endl;
			}
			
					}
		
/*		void getCount()
		{
		//	objectCounter+=1;
			cout << "Count is: " << objectCounter << endl;	
		}
*/		
	
	
		
};


int main()
{
	
	Cube Cube1(6.3, 5.2, 4.1);   
   	Cube Cube2(3.2, 2.0, 2.0); 
	
	//Cube1.getCount();
	//Cube2.getCount();
	Cube1.Volume();
	Cube2.Volume();
	Cube2.Compare();
	return 0;
}





