#include<stdio.h>
void main()
{
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<10;j++)
		{
		if(i==0||i==5||j==0||j==9)
		  	printf("*");
		else
		  printf(" ");
	    }
	  printf("\n");
    }
}
