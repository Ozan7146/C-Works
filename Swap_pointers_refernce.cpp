#include<iostream>

using namespace std;

void Swap(int &a,int &b)
{
int temp;
temp=a;
a=b;
b=temp;
}

void Swap1(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;	
	
}

int main()
{
int x,y;

cout<<"Enter two integer value that you want to swap their values:"<<endl;
cin>>x>>y;	
cout<<"Before swap x= "<<x<<"Before swap y= "<<y<<endl;	
Swap(x,y);
cout<<"After swap 1 x= "<<x<<"After Swap 1 y= "<<y<<endl;	
Swap1(&x,&y);	
cout<<"After swap 2 x= "<<x<<"After Swap 2 y= "<<y<<endl;	
	
	return 0;
}
