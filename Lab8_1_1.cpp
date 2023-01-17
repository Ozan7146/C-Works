#include<iostream>
#include<math.h>
#define PI 3.14

using namespace std;


class GeometricObject
{
	protected:
	
		string color;
		bool filled;
	
	public:
		
		GeometricObject()
		{
			//cout << "A rectangle created with:" << endl;
		}		
	
		GeometricObject(string color, bool filled)
		{
			this->color = color;
			this->filled = filled;
			
		}
	
		string getColor()
		{
			return color;
		}
		
		bool getFilled()
		{
			return filled;
		}
		
};



class Circle : public GeometricObject
{
	private:
		
		double radius;
		//double PI;
	
	public:
		
		Circle (double radius , string color ,bool filled) : GeometricObject (color,filled)
		{
			this->radius = radius;
			cout << "color:" << getColor() << "  " << "filled:" << getFilled() << endl;
		}
	
	
		Circle() 
		{
			cout << "A Circle created with:" << endl;
		}
	
		Circle(double radius)
		{
			this->radius = radius;
			
		}
		
		

		double calcArea()
		{
			return PI * pow(radius,2);	
		}
		
		double calcPerimeter()
		{
			return 2 * PI * radius;	
		}
};


class Rectangle : public GeometricObject
{
	private:
		
		double width;
		double height;
		
	public:
	
		Rectangle()
		{
			cout << "A rectangle created with:" << endl;
			

		}	
		
		Rectangle(double width , double height)
		{
			this->width = width ;
			this->height = height ;
		}
		
		Rectangle(double width , double height ,string color , bool filled )  : GeometricObject(color,filled)
 		{
			this->width = width ;
			this->height = height ;	
			cout << "color:" << getColor() << "  " << "filled:" << getFilled() << endl;
		}
		
		double calcArea()
		{			
			return (height * width)/2;
		}
		
		double calcPerimeter()
		{
			return width * 3;
		}


	
};




int main()
{
	
	Circle c;
	Circle C(3,"Blue",true);
	cout << "The area of circle:" << C.calcArea() << endl;
	cout << "The perimeter of circle:" << C.calcPerimeter() << endl ;
	cout << "color: " << C.getColor() << " and filled: " << C.getFilled() << endl << endl;
	Rectangle r;
	Rectangle R(2,5,"red",true);
	cout << "color: " << R.getColor() << " and filled: " << R.getFilled() << endl;
	cout << "The area of rectangle:" << R.calcArea() << endl;
	cout << "The perimeter of rectangle:" << R.calcPerimeter() << endl;
	
	return 0;
}










	

