#include<stdio.h>
void main()
{
   float a,b,BMI;
   printf("Enter your weight in kilograms:");
   scanf("%f",&a);
   printf("Enter your height in meters:");
   scanf("%f",&b); 
   BMI = a/(b*b);
   if(BMI < 18.5)
   {
   	  printf("Underweight");
   }
   else if(BMI<25.0)
   {
   	  printf("Normal weight");
   }
   else if(BMI<30.0)
   {
   	  printf("Overweight");
   }
   else
      printf("Obesity");	  
}