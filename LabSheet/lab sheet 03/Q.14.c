#include<stdio.h>
void main()
{
	float a,b,c;
	printf("A:");
   	scanf("%f",&a);
   	printf("B:");
   	scanf("%f",&b);
   	printf("C:");
   	scanf("%f",&c);
   	if(a>b){
   		if(a>c)
   		   printf("A is the largest number");
   		else
		   printf("C is the largest number");	
	   }
	else{
	    if(b>c)
	       printf("B is the largest number");
	    else
           printf("C is the largest number");
       }
}