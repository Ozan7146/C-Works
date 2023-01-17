#include<iostream>
#include<stdlib.h>

using namespace std;

class Character
{
	private:
		
		float Health;
		float minDamage;
		float maxDamage;
	
	public:
	
		Character(float a,float b)
		{
			Health = 100;
			minDamage = a;
			maxDamage = b;
		}		
		
		float RandomDamage()
		{
			return (maxDamage - minDamage) * ((((float) rand()) / (float)RAND_MAX)) + minDamage;
		}
		
		void TakeDamage(float a)
		{
			Health = Health - a;
			
		}
		
		float getHealth()
		{
			return Health;
		}
};



int main()
{
	float a,b;
	char x;
	Character Player(5,10),Enemy(5,10);

	do{
	
	cout << "Player Health:" << Player.getHealth() << endl;
	cout << "Enemy Health:" << Enemy.getHealth() << endl;
	
	a = Player.RandomDamage();
	Enemy.TakeDamage(a);
	
	b = Enemy.RandomDamage();
	Player.TakeDamage(b);
	
	
	
	if( Player.getHealth() <= 0 || Enemy.getHealth() <= 0)
	{
		break;
	}
	
	cin >> x;
	}while(x == 'e') ;
	
	
	return 0;
}


