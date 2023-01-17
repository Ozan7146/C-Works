#include <iostream>
#include<math.h>
	using namespace std;


int main() {
	int a,b,h;
	char flag;
	
	do{
	
	
	
	cout<<"Enter the side of the triangle: ";
	cin>>a>>b>>h;
	
	if(pow(a,2)+pow(b,2)==pow(h,2))
	{
	cout<<"Perpendicular Triangle"<<endl;		
	
	}
	cout<<"Do you want to continue:";
	cin>>flag;
		
	while(flag!='Y' && flag!='y' && flag!='n' && flag!='N')	//EKSTRA BAÞKA DEÐER GÝRÝLÝRSE Y VEYA N DIÞINDA TEKRAR DEÐER ÝSTER... 
		{
			cout<<"Wrong number"<<endl;
			cout<<"Do you want to continue:";
			cin>>flag;
			if(flag=='Y' || flag=='y' || flag=='n' || flag=='N')
			{
				
			break;
		
			}
		}

	}while(flag=='y' || flag=='Y');
	
	
	
	return 0;
}
