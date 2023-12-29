#include<stdio.h>

int from;
int to;
int val;

int counter(int from, int to, int val){
    int counter = 0;

    for (int i = from; i <= to; i++)
    {
        int n=i;
        while (n>0)
        {
            if (n%10==val)
            {
                counter++;
            }
            n/=10;
        }
        
    }
    return counter;
}

int main()
{
    printf("enter the range of integers:\nfrom: ");
    scanf("%d",&from);
    printf("to: ");
    scanf("%d",&to);
    printf("enter the digit need to count: ");
    scanf("%d",&val);
    int repTime = counter(from, to, val);
    printf("number of %ds in the given range is %d\n",val, repTime);
    return 0;
}

