#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <stdbool.h>
int game(int i,int j)
{
	if(i==j)
	  return -1;
	else if(i==2 && j==1)
	  return 0;
	else if(i==1 && j==2)
	  return 1;
	else if(i==3 && j==2)
	  return 0;
	else if(i==2 && j==3)
	  return 1;
	else if(i==1 && j==3)
	  return 0;
	else if(i==3 && j==1) 
	  return 1;
	else
	   return 2;        
}

int main()
{
	int j;
	bool A=true;
	printf("1.rock\n");
	printf("2.scissors\n");
	printf("3.paper\n");
	while(A){
	printf("Enter your choise as a number: ");
 	scanf("%d",&j);
	if(j==1 || j==2 || j==3)
	   A=true;
	 else{
	   A=false;  
     }
	    	
 	int i=rand()% 3;
    int result=game(i,j);
		
 	if(result==-1)
 	  printf("game drawn..\n");
 	else if(result==1)
	  printf("*..you have won the game..*\n"); 
	else if(result==0)
	  printf("you lost the game\n");
	else{
	  A=false;
	  printf("......invalid choice & End the game......");
    }
    }
}