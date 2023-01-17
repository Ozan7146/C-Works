#include<iostream>

using namespace std;


int main()
{
	try{
		
		int a =33;
		int b=34;
		string month = "fucked";
		if (a<b)
		{
			throw month;
		}
	}
	catch(string x)
	{
		cout << "You fucked up:" << x;
		
	}

return 0;
}
