#include<iostream>

using namespace std;

class Cube{
	
	private:
		double length,breadth,height,vol;
		
	 
	public:
		static int objectCounter;
		
		double Volume();
		int compare();
		static int getCount();
		
		Cube(double x,double y,double z)
		{
			length=x;
			breadth=y;
			height=z;
			Volume();
		
			objectCounter++;
			cout << "Constructor called." << endl;		
		}
	
};



int Cube::objectCounter=0;

double Cube::Volume(){
	double vol;
	vol=length*breadth*height;
	return vol;
}
int Cube::compare(){
	
int flag;
	if(this->vol > vol)
	{
		return flag=1;
	}
	else 
	{
		 return flag=0;
	}
	
}

static int Cube::getCount(){
	return objectCounter; 
	
}



	
	
	
	
	
int main(){
	int flag;
	
	cout << "Intial Stage Count:" << static int getCount() << endl;
	Cube Cube1(6.3, 5.2, 4.1);   
	Cube Cube2(3.2, 2.0, 50.0); 
	cout << "Final Stage Count:" << Cube2.getCount() << endl;
	if(flag==1)
	{
		cout << "Cube1 is smaller than Cube2 " << endl;
	}
	else if(flag == 0){
		cout << "Cube1 is bigger or equal than Cube2" << endl;
		
	}
	
	
	
	return 0;
}
