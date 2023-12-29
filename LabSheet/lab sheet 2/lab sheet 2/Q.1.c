#include<stdio.h>
int main()
{
	float a,b,c,d;
	a=1; b=2; c=3; d=4;
	float e=(a+b)/(c+d);
	printf("a.(a+b)/(c+d)=%.2f\n",(a+b)/(c+d));// 0.43
	printf("b.a+b/(c+d)  =%.2f\n",a+b/(c+d));//1.29
	printf("c.(a+b)/c+d  =%.2f\n",(a+b)/c+d);//5.00
	printf("d.a*b/c*d    =%.2f\n",a*b/c*d);//2.67
	return 0;
}