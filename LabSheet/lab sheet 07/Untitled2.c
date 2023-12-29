#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter the days: ");
	scanf("%d",&a);
	b=a/365;
	c=a%365;
	d=c/7;
	e=c%7;
	printf("years=%d weeks=%d days=%d",b,d,e);
	return 0;
}
