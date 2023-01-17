#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char a;
	char b[100];
	ifstream fin("file.txt");
	
	
	
	while(! fin.eof())
	{
		fin.get(b,100);
		cout << b;//bunda sadece ilk satýrý aldý.
		fin.get(a);//bunda tüm satýrlarý aldý.
		cout << a;
	}	
	
	
	
	/*cout << "Enter the name:" ;
	cin.get(b,5);
	cout << b;
	cin.get(a);
	cout << a;
	*/
	fin.close();
	return 0;
}
