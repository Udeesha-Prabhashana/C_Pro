#include<stdio.h>
int main()
{
	int a,b,c;
	printf("    Enter best score: ");
	scanf("%d",&a);
	while(c<5){
	printf("\nEnter student's score: ");
	scanf("%d",&b);
	if(b>=a-10)
	   printf("**Geade is A**\n");
	else if(b>=a-20) 
	   printf("**Geade is B**\n");
	else if(b>=a-30) 
	   printf("**Geade is c**\n");
	else if(b>=a-40) 
	   printf("**Geade is D**\n"); 
	else
	   printf("**Geade is F**\n");
	c++; 
   }
   return 0;
}