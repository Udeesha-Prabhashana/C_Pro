#include <stdio.h>
#include <stdlib.h>
void findBday(char id[]){
    int num1 = id[0] - '0';
   int num2 = id[1] - '0';
   int year=1900+(num1*10)+num2;


   int num3=id[2]-'0';
   int num4=id[3]-'0';
   int num5=id[4]-'0';
   int mid=num3*100+num4*10+num5;
   if(mid>500){
    mid-=500;
   }
   int monthCon=0;
   int day;
   int months[]={31,29,31,30,31,30,31,31,30,31,30,31};
   for(int i=0;i<12;i++){
        if(mid<months[i]){
            monthCon++;
            day=mid;
            break;
        }else{
        monthCon++;
        mid-=months[i];
        }
    }
    printf("Birth date: %d-%d-%d",year,monthCon,day);
}
int main()
{
   printf("Enter the id: ");
   char id[12];
   scanf("%s",&id);
   findBday(id);
}