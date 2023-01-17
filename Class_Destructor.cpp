#include<iostream>

using namespace std;

class Country{
	
	public:
		string rem_country;
		int city;
		int population;
		
		 Country(string country){
			rem_country=country;
			cout<<country<<" is created."<<endl;
				}
		 Country(string country,int city){
			cout<<country<<" is created with "<<city<<" number of cities"<<endl;
			rem_country=country;
		}
		 Country(string country,int city,int population){
			cout<<country<<" is created with "<<city<<" number of cities and "<<population<<" population"<<endl;
		rem_country=country;
		}
		~Country(){
			cout<<rem_country<<" is fell down "<<endl;
		}
	
};



int main()
{
	
	Country O1("Turkey");
	Country O2("Germany",79);
	Country O3("Brazil",17,2140000);
	
	
	
	return 0;
}
