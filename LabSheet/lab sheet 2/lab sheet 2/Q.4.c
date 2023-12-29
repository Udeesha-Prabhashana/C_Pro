#include<stdio.h>
int main()
{
    char C = 'B';
    int i = 3, j = 3, k = 3;
    double x = 0.0, y = 2.3; 	
    printf("a. %d\n",i && j && k);
    printf("b. %d\n", x || i && j - 3 );
    printf("c. %d\n", i < j && x < y );
    printf("d. %d\n", i < j || x < y );
    printf("e. %d\n",'A' <= C && C <= 'Z');
    printf("f. %d\n",C - 1 == 'A' || C + 1 == 'Z');
    return 0;
}