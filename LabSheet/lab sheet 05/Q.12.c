#include<stdio.h>
#include<string.h>

int top=-1;

void push(char ch, char stack[]);
char pop(char stack[]);

int main(){
	char string[20];
	printf("Enter the string: ");
	scanf("%s",&string);
	
	int length = strlen(string), i;
	char stack[length], character;
	
	for(i=0; i<length; i++){
		push(string[i],stack);
	}
	
	printf("The reversed string is: ");
	for(i=0; i<length; i++){
		character = pop(stack);
		printf("%c",character);
	}
	
	return 0;
}

void push(char ch, char stack[]){
	top++;
	stack[top] = ch;
}

char pop(char stack[]){
	char ch = stack[top];
	top--;
	return ch;
}
