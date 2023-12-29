#include<stdio.h>
void main()
{
   printf("Please select the number between 0 and 100 and keep it in your memory\n");
   printf("1-too high\n");
   printf("2-too low\n");
   printf("3-that’s the number\n");
   printf("..plese input your answer as a 1,2,3..\n");
   int a,i,total=0,low=0,upper=100;
   
   while(3!=i){
   if(1==i){
   		 upper=a;
   		 a=(low+upper)/2;
         printf("is %d your number?=",a);
         scanf("%d",&i);
   	}
   else{
   	    low=a;
   	    a=(low+upper)/2;
        printf("is %d your number?=",a);
        scanf("%d",&i);
   }
   total+=1;
   }
   printf("Your Number is correct.Your guessed %d tries!\n",total);
}