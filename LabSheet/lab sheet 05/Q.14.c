#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char phrase[] = "cut your coat according to the cloth";
  int L=strlen(phrase);
  int i;
  char word[4]={};
  for(i=0;i<L-3;i++)
  {
    if(phrase[i]=='c' && phrase[i+1]=='o' && phrase[i+2]=='r' && phrase[i+3]=='d')
    {
      printf("\'code\' word is included");
      break;
    }
    else
    {
      printf("\'code\' word is not included");
      break;
    }  
  }
}