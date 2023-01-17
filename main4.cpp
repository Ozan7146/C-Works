#include <iostream>

using namespace std;


int main() {
	
		int number,value,draw,deposit;
	
	value=1000;
	cout<<"Your total money is " <<value<<endl;
	cout<<"***TRANSACTION***"<<endl<<"1. Withdrawal"<<endl<<"2. Deposit"<<endl<<"3. Check Balance"<<endl<<"4. Cancel"<<endl;

	

	do
	{

		cout<<"Enter your transaction: ";
		cin>>number;

		
		switch(number)
		{
		
			case 1:
			{
			cout<<"Your total money is " << value<<endl;
			cout<<"Money you want to draw:";
			cin>>draw;
			if(value>draw)
			{
				value=value-draw;
				cout<< "New balance is"<< value <<endl;
				break;
				
			}
			
			
			}	
			
			
		case 2:
			{
			cout<<"Your total money is " << value<<endl;
			cout<<"Money you want to deposit:";
			cin>>deposit;
						value=value+deposit;
						cout<< "New balance is"<< value <<endl;
						
						break;
			}
		
		case 3:
			{
			cout<<"Your total money is " << value<<endl;
			break;
				
			}
			
	
	
		default:
			break;	
		}
		
	
		
	}while(number!=4);
	cout<<"Have a nice day";
	
	return 0;
}
