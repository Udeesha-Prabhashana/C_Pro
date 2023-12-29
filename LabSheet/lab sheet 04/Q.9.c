#include <stdio.h>
int sum_power(int x, int y)
{
	int sum;
	for(int i=x;i<=y;i++){
		int a=i*i;
		sum+=a;
	}
	    return sum;
}
 int main()
{
 	printf ("Enter any two numbers:\n");  
 	int num1,num2;
    scanf ("%d %d", &num1, &num2);
	int b= sum_power(num1,num2);
	printf ("sum=%d",b);
}