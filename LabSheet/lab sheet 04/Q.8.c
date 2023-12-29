#include <stdio.h>
int GCDnum(int n1, int n2)
{
	int GCD_Num,i;
	for( i = 1; i <= n1 && i <= n2; ++i)  
    {  
        if (n1 % i ==0 && n2 % i == 0)  
            GCD_Num = i; 
    }  
    return GCD_Num;
 } 
int main()  
{  
    
    int num1, num2, GCD_Num;  
    printf ( " Enter any two numbers: \n ");  
    scanf ( "%d %d", &num1, &num2);   
      
    GCD_Num = GCDnum(num1, num2);
    
    printf (" GCD of two numbers %d and %d is %d.", num1, num2, GCD_Num);  
    return 0;  
}