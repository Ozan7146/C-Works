#include <iostream>
using namespace std;

template<class T1>
T1 area(T1 t1, T1 t2) {
return t1 * t2;
}

template<class T2>
T2 perimeter(T2 t1, T2 t2){
return 2*(t1+t2);
}



int main() {
	
	int i1 = 4, i2 = 25;
	float f1 = 3.5, f2 = 1.5;
	cout << "area and perimeter of integer edges: "<<area(i1, i2)<<" and " << perimeter(i1, i2)<< '\n';
	cout << "area and perimeter of float edges: "<<area(f1, f2)<<" and "<< perimeter(f1, f2)<< '\n';
	
	return 0;
}
