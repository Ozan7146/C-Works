#include <iostream>

using namespace std;


class Line
{
	private:
		
		int length;
	
	public:
		
		Line()
		{
			cout << "Line object has been created\n" ;
		}
		
	
		int setLength(int a)
		{
			length = a;
		}
		
		int getLength()
		{
			return length;
		}
		
		~Line()
		{
			cout << "Line object has been deleted\n" ; 
		}
		
};



int main()
{
	Line obj;
	obj.setLength(6);
	cout << "Lenght of line:" << obj.getLength() << endl;
	return 0;
}
