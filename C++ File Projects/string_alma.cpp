#include<iostream>
#include<fstream>

using namespace std;


int main()
{
	char b[12];
	cout << "Enter file name:";
	cin >> b ;
	
	ifstream file(b);
	string a;
	char x[123];
	char y;
	int count=0;
	while(!file.eof())
	{
	
//	file >> x;
//	cout << x << endl;	
	
	//	file.getline(x,123);
	//	cout << x << endl;
		
	//	getline(file,a);
	//	cout << a << endl;
		
	//	file.get(y);
	//	cout << y ;
	
	
	
	//  file.get(x,120); //sadece ilk sat�r� kelime kelime al�yor
	//	cout << x ;
	//	cout << endl;
		// x ve a ayn� �ekilde al�yor yani kelime kelime
		//file >> x;
		//cout << x << endl;
		//file >> a ;
		//cout << a << endl;
		count++;
	}
//	file.get(x,120);
//	cout << x;
	cout << endl;
	cout << "count:" << count;

	file.close();
	return 0;
}
