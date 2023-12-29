#include<stdio.h>
void main()
{
   float UP,QP,R,S;
   printf("Enter the unit price of a product:");
   scanf("%f",&UP);
   printf("Enter the quantity of a product:");
   scanf("%f",&QP);	
   if(QP<=120)
   {
   	  R=UP*QP;
      printf("Revenue=%f",R);
   }
   else if(QP<=160)
   {
      R=UP*QP;
      S=R-R*0.15;
      printf("Revenue=%f",S);
   }
   else if(QP>160)
   {
   	  R=UP*QP;
      S=R-R*0.2;
      printf("Revenue=%f",S);
   }
}