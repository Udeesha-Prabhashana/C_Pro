#include<stdio.h>
int main()
{
	int years,days,minites;
	printf("enter the number of years:");
	scanf("%d",&years);
	printf("enter the number of days:");
	scanf("%d",&days);
	minites=(years*525600+days*1440);
	printf("minites =%d",minites);
	return 0;	
}