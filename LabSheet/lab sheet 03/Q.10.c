#include<stdio.h>
void main()
{
	int a,b,c,d;
    printf("Enter the year:");
	scanf("%d",&a);
	b=a%4;
	c=a%100;
    d=a%400;
	if(b==0)
	{	  
    if(c==0 && d!=0){
       printf(" not leap year"); 
     }
    else{
       printf("leap year"); 	
	}
	}
	else{
       printf(" not leap year");	
    }
}