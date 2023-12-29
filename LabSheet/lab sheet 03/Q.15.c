#include<stdio.h>
void main()
{
	int A,B,C;
	float disc,deno,x1,x2;
	printf("Enter the numerator of x^2, A=");
   	scanf("%d",&A);
   	printf("Enter the numerator of x, B=");
   	scanf("%d",&B);
   	printf("Enter the coonstant term, C=");
   	scanf("%d",&C);
   	disc=(B*B)-(4*A*C);
   	deno =2*A;
    if(disc>0){
    	x1= (-B/deno)+(sqrt(disc)/deno);
    	x2=(-B/deno)-(sqrt(disc)/deno);         
    	printf("THE ROOTS ARE REAL ROOTS\n");
    	printf("x1=%f\n",x1);
    	printf("x2=%f",x2);
    }
    else if(disc==0){
    	x1= -B/deno;
    	printf("THE ROOTS ARE REPEATED ROOTS\n");
    	printf("x1=%f",x1);
	}
	else{
		printf("THE ROOTS ARE IMAGINARY ROOTS");
	}
}