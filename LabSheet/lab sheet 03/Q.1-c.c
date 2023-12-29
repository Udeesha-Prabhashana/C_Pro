#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
		if(i==0||i==5||i==j||j==0||j==5)
		  	printf("*");
		else
		  printf(" ");
	    }
	  printf("\n");
    }
}