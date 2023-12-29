#include<stdio.h>
#include<stdlib.h>

double addition(double x,double y){
	return x+y;
}
int main(){
 	printf("Enter your first number: ");
 	double x;
 	scanf("%lf",&x);
 	
 	printf("Enter your second number: ");
 	double y;
 	scanf("%lf",&y);
 	
 	printf("count is= %lf",addition(x,y));
 }
