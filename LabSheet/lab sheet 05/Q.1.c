#include<stdio.h>
int main()
{  
    printf("\t\t*************MULTIPLICATION TABLE*************\n\n");
    
    for(int k=1;k<11;k++){
    	printf("\t%d",k);
	}
	printf("\n");
	for(int k=1;k<11;k++){
    	printf("\t`");
    }
	printf("\n\n");
	int array[11][11];
	for(int i=1; i<11; i++){
		printf("%d>",i);
		for(int j=1; j<11; j++){
			array[i][j]=i*j;
			printf("\t%d",array[i][j]);
		}
		printf("\n\t__________________________________________________________________________\n");
	}
}
   
