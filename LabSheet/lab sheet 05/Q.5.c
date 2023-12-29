#include<stdio.h>
int main()
{
	int array1[10],array2[10],a,b,i,count;
	printf("Enter the ten numbers: ");
	for(i=0;i<10;i++){
	scanf("%d,",&array1[i]);
    }
    
    array2[0]=array1[0];
    for(int i=1;i<10;i++){
       for(int j=0;j<i;j++){
          if(array2[j]==array1[i])
          	 break;
		  else if(array2[j]!=array1[i] && i==j+1)
		         array2[j+1]=array1[i];
				 count=i;      			 
	        }	
	    }
	    
    printf("The distinct numbers are: ");
	for(b=0; b<count; b++){
		if(array2[b]!=0){
			printf("%d\t",array2[b]);
		}
	}
	return 0;
}