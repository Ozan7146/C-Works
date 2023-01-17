#include <iostream>

using namespace std;

class Cube
{
	private:
		
		double length;
		double breadth;
		double height;
	
	public:
		
		static int objectCounter;

		
		Cube(double length,double breadth,double height)
		{
			cout << "Constructor called." << endl;
			this->length = length;
			this->breadth = breadth;
			this->height = height;
			getCount();
		}
		
		double Volume()
		{
			return length * breadth * height;
		}
		
		int Compare(Cube c)
		{			
		
			if(this->Volume() >= c.Volume() )
			{
				return 1;
			}
			
			else return 0;
			
		}
		
		static int getCount()
		{
			return objectCounter++;
		}
		
};

int Cube::objectCounter = 0;


int main()
{
	
	cout << "Initial Stage Count:" << Cube::objectCounter << endl;
	Cube Cube1(6.3, 5.2, 4.1);   
	Cube Cube2(5, 2.0, 2.0); 
	cout << "Final Stage Count:" << Cube2.getCount() << endl;
	if(Cube1.Compare(Cube2) == 1)
	{
		cout << "Cube 1 is bigger than or equal Cube 2" << endl;
	}
	
	else cout << "Cube 2 is bigger than Cube 1" << endl;
	
	return 0;
}
