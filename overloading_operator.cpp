#include<iostream>

using namespace std;

class Position{
	
	public:
		static int x;
		static int y;
	Position operator + (Position pos)
	{
		Position new_pos;
		new_pos.x=x+pos.x;
		new_pos.y=y+pos.y;
		return new_pos;
		}	
};
int Position::x=10;
int Position::y=20;


int main(){
	
	
	
	Position pos1,pos2;
	Position pos3=pos1+pos2;
	cout << pos.operator +();
	return 0;
}
