#include<stdio.h>
int main()
{
	int a=1;
	printf ("a.a  =%d\n",a);   //the value of variable a is 1
	printf ("b.a++=%d\n",a++); //the value of a is incremented by 1 after using it in this expression, value of a was 1, now it's incremented to 2 but 1 is displayed.
	printf ("c.++a=%d\n",++a); //the value of a is incremented by 1 befor using it in this expression, value of a was 2, now it's incremented to 3 and 3 is displayed.
	printf ("d.a--=%d\n",a--); //the value of a is decremented by 1 after using it in this expression, value of a was 3, now it's decremented to 2 but 3 is displayed.
	printf ("e.--a=%d\n",--a); //the value of a is decremented by 1 befor using it in this expression, value of a was 2, now it's decremented to 1 and 1 is displayed.
	return 0;
}