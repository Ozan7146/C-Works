#include <iostream>

using namespace std;
int main() {
	
	//do while kullan
	
	int withdraw,deposit,number,money=1000;
	int flag=0;
	while(1){

	cout<<"Enter your transaction"<<endl;		
	cin>>number;
	
	
	switch(number)
	{
	cout<<"1. Withdrawal\n 2.Deposit\n 3.Check balance\n 4.Cancel";
	if(flag==1)
	{
		break;
	}
	
	case 1:	
	{
		cout<<"Your balance is \n"<<money;
		
		cout<<"Enter the amount that you want to withdraw:\n"<<endl;
		cin>>withdraw;
		if(withdraw<money){
			money=money-withdraw;
			
			cout<<"New money\n"<<money;
			break;
						}
		else
		{
			cout<<"You dont have that much money:\n";
			break;
		}				
		
						
	}	
	case 2:
	{
		cout<<"Your balance is "<<money;
		cout<<"Enter the amount that you want to deposit:\n"<<endl;
		cin>>deposit;
		money=money+deposit;
		cout<<"New money"<<money;
		break;
	}
	
	case 3:	
	{
		cout<<"Your balance is "<<money;
		break;

	}
	
	case 4:
	{
		
		cout<<"Your balance is "<<money;
		system("pause");
		flag=1;
	
	}
	
	default:
	{
		cout<<"byee";
		break;
		}	
	}	
	}
	
	return 0;
}
