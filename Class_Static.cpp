#include<iostream>
using namespace std;


class Cube{
	private:
		double length;
		double breadth;
		double height;
		static int objectCounter;
		
	public:
		Cube(double a,double b,double c)
		{
			
			objectCounter+=1;
		}
		double Volume(double a)
		{
		return a*a*a;
		}
		double Compare(double vol)
		
		{
		if(this->vol==vol)
		cout<<"They are equal"<<endl;
		}
		
};




int main()
{
	
	Cube cube1(6.3,5.2,4.1);
	Cube cube2(3.2,2.0,2.0);
	
	return 0;
}
