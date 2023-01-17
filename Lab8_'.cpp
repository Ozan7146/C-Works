#include<iostream>

using namespace std;


class Oem
{
	private:

		string name; //privattaki de�erlere eri�mek istiyorsan o de�ere �zel fonksiyon return'lemen laz�m.

	public:
		
		//string name;
		string brand;
		int price;
		int dolarExchangeRate;
		int taxRate;

	public:
		
		Oem(){}
		
		Oem(string name,string brand ,int dolarPrice)
		{
			this->name = name;
			this->brand = brand;
			taxRate = 0.18;
			dolarExchangeRate = 3.72;
			SetPrice(dolarPrice,taxRate,dolarExchangeRate);

			
		}
		
		
		void SetPrice(int dolarPrice,float taxRate,float dolarExchangeRate)
		{
			this->price = dolarPrice * dolarExchangeRate + dolarPrice * dolarExchangeRate * taxRate ;
		}
		
		string GetName() //private eri�imi i�in.
		{
			return this->name;
		}
	
};








class CPU : public Oem
{
	private:
	
		string serialNumber;
		string clockSpeed;
		string cache;
		string memoryWidth;
	
	public:
		
		CPU(){}
		
		CPU(string serialNumber,string clockSpeed,string cache,string memoryWidth,string name ,string brand, int dolarPrice) : Oem( name, brand, dolarPrice) // tek obje tan�mlamak i�in Oem() k�sm�n� kulland�k inheritance.
		{
			this->serialNumber = serialNumber;
			this->clockSpeed = clockSpeed;
			this->cache = cache;
			this->memoryWidth = memoryWidth;
			
		}
		
		void PrintInformation()
		{
			cout << "Brand:" << brand << endl << "Name:" << GetName() << endl; // privattaki name i almak i�in GetName() fonksiyonunu �a��rd�k.
 			cout << "Serial Number:" << serialNumber << endl << "Clock Speed:" << clockSpeed << endl;
			cout << "Cache:" << cache << endl << "Memory Width:" << memoryWidth << endl;
			cout << "Price as TL:" << price << endl; 
			
		}
	
	
};




int main()
{
	CPU obj("123213","45","1234","123 mb","ozan","intel",13444);
	obj.PrintInformation();
	
	
	return 0;
}
