#include<stdio.h>
#include<string.h>
#include <stdlib.h>

void PasswordGenerator(char A[], int count)
{
	char ch,temp;
	char B[20]={'0'}, ch2[4], ch3[4];
	int p, n;

	sprintf(ch2, "%d", count);
	strcpy(B, ch2);
	for(int j=0; j<count;j++){

		if('0' <= A[j] && '9' >= A[j]){
			p = A[j]-'0';
			p = p+4;
			sprintf(ch3, "%d", p);
			strcat(B, ch3);
			
		}

		else if ('a' <= A[j] && 'z' >= A[j])
		{
			n = strlen(B);
			B[n] = A[j] - 32;
		}
		else
		{
			n = strlen(B);
			B[n++] = A[j];
		}
	
	}
		strcat(B,"*");
		for (int i = strlen(B); i >= 0; i--)
		{
			printf("%c", B[i]);
		}			
	}	

int main()
{
	while(1)
	{
   	  char array[20];
	  int count;
	  printf("enter your password: ");
	  scanf("%s",array);
	  count= strlen(array);
	    if(5<count && count<10){
		    PasswordGenerator(array,count);
		    break;
	    }
	    else{
		    printf("Please enter your password between 6 and 9 charcters\n");
	    }
   }
}