#include <stdio.h>
#include <string.h>

int top = -1;
int stack[20];
void push(char ch);
char pop();

int main(){
	char exp[20],tmpNum;
	int i, isValid=1;
	
	printf("Enter an expression : ");
	scanf("%s",&exp);
	
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
			push(exp[i]);
		if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
			if(top == -1)
				isValid=0;
			else{
				tmpNum=pop();
				if(exp[i]==')' && (tmpNum=='{' || tmpNum=='['))
					isValid=0;
				if(exp[i]=='}' && (tmpNum=='(' || tmpNum=='['))
					isValid=0;
				if(exp[i]==']' && (tmpNum=='(' || tmpNum=='{'))
					isValid=0;
			}
	}
	
	if(top>=0)
		isValid=0;
		
	if(isValid==1)
		printf("Parantheses are balanced\n");
	else
		printf("Parantheses are not balanced\n");
		
	return 0;
}

void push(char ch){
	if(top == (20-1))
		printf("Stack Overflow\n");
	else{
		top=top+1;
		stack[top] = ch;
	}
}

char pop(){
	if(top == -1)
		printf("Stack Underflow\n");
	else
		return(stack[top--]);
}
