#include<iostream>

using namespace std;

template<class T1,class T2>
class Temp
{
	public:
		
		Temp(T1 a,T2 b)
		{
			cout << a << endl << b << endl;		
			cout << "T1  T2 calýstý" << endl;
		}
		
		/*Temp(T1 e,T1 f)
		{
			cout << e << endl << f << endl;		
			cout << "T1  T2 calýstý" << endl;
			
		}
		*/ //Çalýþmaz çünkü yukardaki Temp(T1 a,T2 b) ile ayný görevde
		
};


template<class X,class Y>
Y temp_func(X x,Y y )
{
		return x+y;
}


int main()
{
	
	Temp<char,char> ob('a','b');
	Temp <int,int> obj(3,4);
	Temp<int,float> obj1(31,1.6);
	Temp<float,int> obj2(5.4,62);
	cout << temp_func(6,8.6);

	return 0;
}
