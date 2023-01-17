#include<iostream>

using namespace std;

int main(){
	
	string takimlar[]={"GS","FB"};
	string *takimlarAdres=takimlar;
	takimlarAdres=&takimlar[0];
	//takimlarAdres=&takimlar;

	cout<<takimlarAdres<<endl;
	cout<<*takimlarAdres<<endl;
	
		return 0;
}
