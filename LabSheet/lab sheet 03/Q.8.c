#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter your number:");
   scanf("%d",&a);
   for(b=1;b<=a;b++){
   c=a%b;
   if(c==0)
   	  {
   	  	printf("%d\t",b);
	  }
   }
}