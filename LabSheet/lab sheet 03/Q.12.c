#include<stdio.h>
void main()
{
	int count=0;
	int a,b,i,num;
	
	printf("Enter the lower range: ");
	scanf("%d",&a);
	printf("Enter the upper range: ");
	scanf("%d",&b);
	
	for(i=a;i<=b;i++){
		num=i;
		while(num>0){
			if(num%10==2){
				count++;
			}
			num/= 10;
		}
	}
	
	printf("%d\n",count);
}

