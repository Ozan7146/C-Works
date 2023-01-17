#include<iostream>

using namespace std;

class Square
{
	
	private:
		
		int side;

	public:
		
		Square()
		{
			side = 2;
		}
		
		friend class Increment;
};

class Increment
{
	
	private:
	
		int inc;
	
	public:
		
		Square c;
		
		Increment(int i)
		{
			inc = i;
		}

		void change()
		{
			cout << "Side of the square:" << c.side + inc << endl;
		}


};


int main()
{
	int x;
	cout << "Enter the increment value:" << endl;
	cin >> x;
	

	Increment a(x);
	a.change();
	return 0;
}
