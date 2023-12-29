#include<stdio.h>
double total(double array[]) 
{
	double x=0.0;
	for(int i=0;i<15;i++){
		x+=array[i];
    }
    return x;
}

double average(double array[])
{
	double y=0;
	for(int i=0;i<15;i++){
	y+=array[i];
    }
    double z=y/15;
    return z;
}

double minimum(double array[])
{
	double min = 500;
	for(int i=0;i<15;i++){
		double x=array[i];
		if(x<min)
		   min=x;
	}
	return min;
}

double maximum(double array[])
{
	double max = -1;
	for(int i=0;i<15;i++){
		double x=array[i];
		if(x>max)
		   max=x;
	}
	return max;
}

double maximumelement(double array[])
{
 	double y;
 	double mel;
	  	for(int i=0;i<15;i++){
		double x=array[i];
 		if(x>y)
 		   mel=i;
   	  	double y=x;
 	}
 	return mel;
}

int main()
{
	double array[15]={34.5,56.7,12.6,98.4,54.21,89.55,54.2,98.4,73.2,21.45,34.5,98.4,21.45,98.4,9.3};
	double a,b,c,d,e;
	a=total(array);
	printf("Total= %lf\n",a);
	b=average(array);
	printf("average= %lf\n",b);
	c=minimum(array);
	printf("minimum= %lf\n",c);
	d=maximum(array);
	printf("maximum= %lf\n",d);
	e=maximumelement(array);
	printf("maximumelement is= %lf",e);
	return 0;
}