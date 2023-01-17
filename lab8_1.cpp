#incluede<iostream>

using namespace std;
 
 
class oem{
	
	private:
		string name,brand;
		double price,dollarExchangeRate,taxRate;
	public:	
		oem(){}
		oem(string nam,string bran,double prc){
			name=nam;
			brand=bran;
			price=prc;
			dollarExchangeRate=3.72;
			taxRate=0.18;
			SetPrice();
			
		
		}
		
		void SetPrice(double TL_price,double D_price,double exchangeRate){
		
		TL_price=D_price*exchangeRate+D_price*exchangeRate*taxRate;
			
		}
		
		
}; 



class CPU:oem{
	private:
		int serialNumber;
		int clockSpeed;
		int cache;
		int memory_width;
	public:
		CPU(){
			
			
		}
	
	
};
 
 
 
 
 
 
 
int main(){
	
	
	
	
	
	return 0;
}
