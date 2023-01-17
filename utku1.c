#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	char val[20];
	int x,y,answer;
	
	
	printf("Enter the value for calculation \n");
	scanf("%s",&val);
	
	
	if(strcmp(val,"eksi")==0)
	{
		printf("Enter the x,y \n");
		scanf("%d %d",&x,&y);
		answer=x-y;
		printf("Answer is %d",answer);
		
	}
	
	
	else if(val=="arti")
	{
		printf("Enter the x,y \n");
		scanf("%d %d",&x,&y);
		answer=x+y;
		printf("Answer is %d",answer);
		
	}
	
	else if(val=="carp")
	{
		printf("Enter the x,y \n");
		scanf("%d %d",&x,&y);
		answer=x*y;
		printf("Answer is %d",answer);
		
	}
	
	else if(val=="bol")
	{
		printf("Enter the x,y \n");
		scanf("%d %d",&x,&y);
		answer=x/y;
		printf("Answer is %d",answer);
		
	}
	
	
	else
	{
		printf("Wrong String");
	}
	return 0;
}
