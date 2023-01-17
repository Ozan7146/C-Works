#include<iostream>
#include<string.h>
using namespace std;



class String{
	
	private:
		char array[200];
	public:
		
		String(){}
		
		String(char array[])
		{
			strcpy(this->array , array);
			
		}
	
		void print()
		{
			cout << array << endl; 
		}
		
		String operator + (String a)
		{
			String res;
			strcat(this->array,a.array);
			strcpy(res.array,this->array);
			return res;
		}
	
	
};


int main()
{

	char str1[]="Overloading";
	char str2[]="MemberFunction";

	String s1(str1);
//	s1.print();
	String s2(str2);
//	s2.print();	
	String s3;
	s3=s1+s2;
	s3.print();
	
	return 0;
}
