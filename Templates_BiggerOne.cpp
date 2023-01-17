#include<iostream>

using namespace std;


template<typename everything>
everything BiggerOne(everything x,everything y)
{
	if(x<y)
	{
		return y;
	}
	else
	{
		return x;
	}
	
}



int main(){
	

cout<<"Enter two integer variables: "<<"Max is: "<<BiggerOne(3,5)<<endl;	
cout<<"Enter two integer variables: "<<"Max is: "<<BiggerOne(5.65,5.43)<<endl;	
cout<<"Enter two integer variables: "<<"Max is: "<<BiggerOne('g','a')<<endl;	

//cin>>(x,y);

//cout<<"Max is: "<<BiggerOne(x,y)<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
