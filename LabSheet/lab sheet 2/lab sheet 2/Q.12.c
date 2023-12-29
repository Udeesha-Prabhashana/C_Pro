#include<stdio.h>
int main()
{
   float F,C;
   printf("Enter the temperature in celsius:");
   scanf("%f",&C);
   F = C * 9/5 + 32;
   printf("temperature=%.2f F",F);
   return 0;
}