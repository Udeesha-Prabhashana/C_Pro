#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=0;i<6;i++)
	{   
		for(j=0;j<6;j++)
		{
			if(j<k)
				printf("*");
			else
			    printf(" ");	    
		}
		printf("\n");
		k++;
	}
}