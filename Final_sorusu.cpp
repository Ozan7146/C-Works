#include <iostream>
using namespace std;
template <class T1, class T2=double>
class Data{
protected:
T1 x;
T2 y;
public:
Data(T1 a=0): x(a) {	cout << "Constructor created" << endl;
}



T2 calculate () {
y = x + 3;
return y; }
void print() {
calculate();
cout << y << endl; }
~Data(){
cout<<"object destroyed"<<endl; }
};
int main () {
 int x=1;
 Data<double, int> obj1(2.2);
 obj1.print();
 if(x=1){
 Data<double>obj2(2.5);
obj2.print(); }
 Data<int, double> obj3(3);
 obj3.print();
 } 
