#include<iostream>

using namespace std;



class Cube{
	
	private:
		double length,breadth,height;
		static int objectCounter;
	public:	
		Cube(double x,double y,double z ){
			length=x;
			breadth=y;
			height=z;
			
			
			objectCounter++;
			
		}

		double Volume(){
			return length*breadth*height;
	
		}
		int Compare(Cube Cube){
		cout << " deneme" ;
		return	(this->Cube) > Cube;
			
		}
		static getCount(){
			return objectCounter;
		}
};

int Cube::objectCounter;

int main(){
	
	Cube Cube1(6.3, 5.2, 4.1);   
   	Cube Cube2(3.2, 2.0, 2.0); 
 Cube1.Compare(Cube2);
	
	
	return 0;
}
