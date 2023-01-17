#include <iostream>
using namespace std;

class Base {
   public:
     void virtual print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
	Base *a;
	a = &derived1; 
    // pointer of Base type that points to derived1
    //Base* base1 = &derived1;

    // calls member function of Derived class
    //base1->print();
	a->print();
    return 0;
}


