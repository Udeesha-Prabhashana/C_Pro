#include <stdio.h>

void bubbleSort(float array[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				float temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}


int main()
{
	// input array elements
	float arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d Input number : ",i+1);
		scanf("%f",&arr[i]);
	}
	
	//print entered array 
	printf("\nEntered Array :  ");
	for(i=0;i<10;i++)
	{
		printf("%.1f  ",arr[i]);
	}
	
	//array length
	int n = sizeof(arr)/sizeof(arr[0]);
	
	// sort array
	bubbleSort(arr, n);
	
	//print sorted array 
	printf("\n\nSorted array: ");
	for(i=0;i<10;i++)
	{
		printf("%.1f  ",arr[i]);
	}
}
