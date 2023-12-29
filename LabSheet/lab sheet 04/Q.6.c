#include<stdio.h>
#include<stdlib.h>

int fac(int x)
{
	int y=1;
	for(int i=1;i<=x;i++){
	    y=i*y;
	}
	return y;
}

int main(){
	int n,r;
	printf("Enter the n: ");
 	scanf("%d",&n);
 	printf("Enter the r: ");
 	scanf("%d",&r);
 	int w=fac(n)/(fac(r)*fac(n-r));
 	printf("answer is=%d",w);
}