#include<stdio.h>
#include<string.h>
#include <ctype.h> 

char PasswordGenerator(char A[], int count)
{
	char ch,temp;
	char B[20];
	int p;
	for(int j=0; j<count;j++){
		if("0" <= A[j] && "9" >= A[j]){
			A[j]=A[j]+4;
		}
		else
		    ch=A[j];
		    putchar(toupper(ch));
		}	
	strcpy(B,count);
	for(int i=0;i<count;i++){
		B[i+1]=A[i];		
	}	
	strcat(B,"*");
	
	for (p=0;p<count;p++) {
        temp = B[p];
        B[p] = B[count];
        B[count] = temp;
        count--;
    }
	
	return B;
}


int main()
{
	char array[20];
	int count;
	printf("enter your password: ");
	scanf("%s",array);
	count= strlen(array);
	if(5<count && count<10){
		PasswordGenerator(array,count);
	}
	else{
		printf("Please enter your password between 6 and 9 charcters");
	}
}