#include<stdio.h>
#include<stdlib.h>

int main()
{
   	printf("Enter length of a side: ");
 	double x;
 	scanf("%lf",&x);
 	
 	double y,z;
 	y=x*x*6;
 	z=x*x*x;
 	printf("surface area= %lf\n",y);
	printf("volume= %lf",z);
}