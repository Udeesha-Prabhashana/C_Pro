#include<stdio.h>
void main() 
{
	int a,b;
	printf("Enter the page number:");
	scanf("%d",&a);
    b=a%2;
    if(b==0)
      printf("page is in left side");
    else
	  printf("page is in right side");	   
}