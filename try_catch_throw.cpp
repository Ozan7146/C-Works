#include<iostream>

using namespace std;

int main()
{
	int n1,n2,result;
	cout << "Enter 1st number:" << endl;
	cin >> n1;
	cout << "Enter 2nd number:" << endl;
	cin >> n2;
	
	try
	{
		if(n2 == 0)
			throw n2;
	
	
		else
		{
			result = n1 / n2;
			cout << "The result is:" << result << endl;
		}
	
	}
	
	catch(int x)
	{
		cout << "Cant divide by:" << x;
		
	}
	
	cout << "End of the program";
	return 0;
}
