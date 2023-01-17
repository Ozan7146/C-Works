#include<iostream>

using namespace std;



int main()
{
	
	
int *array=new int[5];
array[0]=3;		
array[1]=2;
array[2]=4;
array[3]=5;
array[4]=6;
delete[] array;
cout<<array[0];
cout<<endl;
cout<<array[4];
	return 0;
}
