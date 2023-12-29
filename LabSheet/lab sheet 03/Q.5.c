#include<stdio.h>
void main()
{
   	float a,x1,x2,y1,y2;
   	printf("Enter the x in first point. x1=");
   	scanf("%f",&x1);
   	printf("Enter the y in first point. y1=");
   	scanf("%f",&y1);
   	printf("Enter the x in second point. x2=");
   	scanf("%f",&x2);
   	printf("Enter the y in second point. y2=");
   	scanf("%f",&y2);
   	a=(y1-y2)/(x1-x2);
   	printf("%f",a);
}