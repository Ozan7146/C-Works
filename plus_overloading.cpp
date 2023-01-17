#include<iostream>

using namespace std;

class load
{
	private:
		
		int a;
	
	public:
		
		load(int a)
		{
			this->a = a;

		}		
	
		void operator +(load x)
		{
			this->a + x.a;
		}
			
};


int main()
{
	
	load A(12);
	
	
	cout << A;

	
	return 0;
	
}



