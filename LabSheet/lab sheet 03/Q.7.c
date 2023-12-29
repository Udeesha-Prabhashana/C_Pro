#include<stdio.h>
void main()
{
   char a;
   printf("Enter your input:");
   scanf("%c",&a);
   if(a>64 && a<91)
   {
   	printf("Uppercase");
   }
   else if(a>96 && a<123)	
   {
   	 printf("Lowercase");
   }
   else 
   {
   	 printf("Not a letter");
   }
}