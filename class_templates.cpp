#include<iostream>

using namespace std;

template<class T>
class A
{
	public:
		
		T num;
		A()
		{
				this->num = num;
			cout << "A constructoru " << endl;
			
		} 
		
		
};


template<class T>
void getData(T a)
		{
			cout << a << endl;
			
		}
template<class T>
		void getData(T b,T c)
		{
			cout << b << c;
		}


int main()
{
	A<int>a;
	getData(5);
	getData(6,7);
	
	
	
	return 0;
}
