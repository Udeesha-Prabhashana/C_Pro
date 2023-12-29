#include<stdio.h>
int main()
{
	float a,b;
	printf("enter the temperature on fahrenheit ");
	scanf("%f",&a);
	b=5*(a-32)/9;
	printf("celsius=%f",b);
	return 0;
}
