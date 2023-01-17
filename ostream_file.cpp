#include<iostream>
#include<fstream>

using namespace std;




class Players
{
	
	private:
	static string name;

	public:
	void ch(ofstream &fout )
	{
		cout << name;
		fout << name ;
		fout.close();
	}


};

string Players::name = "ozan";
int main()
{
	
	
	ofstream fout("deneme.txt");
	
	
	Players a;
	a.ch(fout);
	return 0;
}


