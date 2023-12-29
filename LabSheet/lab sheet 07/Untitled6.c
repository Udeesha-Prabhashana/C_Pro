#include<stdio.h>
#include<stdbool.h>
int main()
{
	int d;
	char a;
	double b,c;
    bool flag=true;
	while(flag){
		printf("enter the operator (+, -, *, /): ");
	    scanf(" %c",&a);
	    printf("\nenter the tow operands: ");
	    scanf("%lf  %lf",&b,&c);
		
	   switch(a){
		   case '+':
		  	   printf("%.1lf + %.1lf = %1lf",b,c,b+c);
			   break;
		   case '-':
		       printf("%.1lf - %.1lf = %1lf",b,c,b-c);
			   break;
		   case '*':
		   	   printf("%.1lf * %.1lf = %1lf",b,c,b*c);
			   break;	
		   case '/':
		   	   printf("%.1lf / %.1lf = %1lf",b,c,b/c);
			   break; 
		   default:
		       printf("Error! operator is not correct");		
	   }
	   printf("\nif you want to close progarm enter 1 and if you want to continue progarm enter any key axcept 1: ");
		  	   scanf("%d",&d);
		  	   if(d==1)
		  	     flag=false;
			   else
			     flag=true; 				  
    }
}
