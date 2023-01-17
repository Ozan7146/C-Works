#include<iostream>

using namespace std;





int World=77;

bool Compare_Global(float x)
{
	if(x == ::World)
	{
	return true;
	}
	else
	{
	return false;
	}
	
}





int main()
{
	
float World=77.0;	
int s;
s=Compare_Global(World);	
cout<<s<<endl;	
	
	
	return 0;
}
