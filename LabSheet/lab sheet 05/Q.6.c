#include <stdio.h>
  
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void selectionSort(int arr[], int n)
{
    int i, j, max_idx;
    for (i = 0; i < n-1; i++)
    {
        max_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[max_idx] < arr[j])
            max_idx = j;
        swap(&arr[max_idx], &arr[i]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
  
int main()
{
	int array1[10];
    printf("Enter the ten numbers: ");
	for(int i=0;i<10;i++){
	scanf("%d,",&array1[i]);
    }
    int n = sizeof(array1)/sizeof(array1[10]);
    selectionSort(array1, n);
    printf("Sorted array: \n");
    printArray(array1, n);
    return 0;
}