#include<stdio.h>
void main()
{
	char a;
	int count=0,max=0;
	printf("enter the string:");
	
	while(a=getchar()){
		if(a=='1'){
			count++;
			if(count>max)
			   max=count;   
		}
		else if(a=='0'){
			count=0;
		}
		else{
			break;
		}
    }
	printf("count=%d",max);
}