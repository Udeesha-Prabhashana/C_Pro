#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Enter your curent run rate: ");
    double x;
 	scanf("%lf",&x);
	printf("Enter your number of overs played: ");
    double y;
 	scanf("%lf",&y);
	double z=x*20;
	printf("projected score for current run rate: %lf\n",z);
	double b;
	int a;
	double c=x*y;
	for(int i=0;i<3;i++){
		a=x+1;
		b=((20-y)*a)+c;
		printf("projected score for %d: %lf\n",a,b);
		x++;
	}
}