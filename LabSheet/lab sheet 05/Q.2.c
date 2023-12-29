#include<stdio.h>
int main()
{
	int array1[3][3]={{3,5,7},{1,6,5},{4,9,8}};
	int array2[3][3]={{6,0,2},{4,7,1},{7,2,1}};
	int array3[3][3];
	printf("ADDITION:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		    array3[i][j]=array1[i][j]+array2[i][j];
			printf("\t%d",array3[i][j]);
		}
		printf("\n");
	}
	printf("SUBTRACTION:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		    array3[i][j]=array1[i][j]-array2[i][j];
			printf("\t%d",array3[i][j]);
		}
		printf("\n");
	}
	printf("MULTIPLICATION:\n");
	int sum;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		   for(int k=0;k<3;k++){
		   	array3[i][j]=array1[i][k]*array2[k][j];
		    sum+=array3[i][j];
		   }
		 array3[i][j]=sum; 
		 printf("\t%d",array3[i][j]); 
	    }
	printf("\n");
	}
}