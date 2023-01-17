#include<iostream>
#include<string.h>
using namespace std;

class String{
	private:
		char string[200];
	public:
		
		String(){
		}
		
		String(char c[200])
		{
			strcpy(this->string , c);
			
		}
	
	
		String operator + (String a)
		{
		String c(0);
		strcat(this->string , a.string);
		strcat(c.string , this->string);
		return c;
		}
	
		void print()
		{
			cout << string[200] ;
		}
};



int main(){
	char str1[] = "Overloading"; 
	char str2[] = "MemberFunction";
	String s1(str1); 
	String s2(str2);
	String s3;
	
	s3 = s1+s2 ;
	
	s3.print();

	return 0;
	
}
