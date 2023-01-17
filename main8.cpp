#include <iostream>

using namespace std;
template <typename Ozan>
Ozan myMax(Ozan a,Ozan b){
	if(a<b){
		return b;
	}
	else
	return a;
}

int main() {
	char g,c;
	cout<<"Answer max:"<<myMax(3,7)<<endl;
	cout<<"Answer max:"<<myMax(3.0,7.0)<<endl;
	cout<<"Answer max:"<<myMax('g','a')<<endl;
	return 0;
}
