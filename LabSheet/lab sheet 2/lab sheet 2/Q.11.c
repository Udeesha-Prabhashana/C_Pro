#include<stdio.h>
int main()
{
	int inch,feet;
	float a;
	printf("firstly enter your height in feet and inches\n");
	printf("enter the feet:");
	scanf("%d",&feet);
	printf("enter the inches:");
	scanf("%d",&inch);
	a=feet*30.48+inch*2.54;
	printf("height= %f",a);
}