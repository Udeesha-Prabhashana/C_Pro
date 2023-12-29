#include <stdio.h>

int main()
{
    int array[5];
    int pos;
    float temp,n;

	int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d :", i+1);
        scanf("%d", &array[i]);
    }
     

    float temparray[5];

    for (i = 0; i < 5; i++)
    {
        n = (float)array[i];
        while(n>10)
        {
            n = n/10.0;
        }
        temparray[i] = n;
    }

    int index[5] = {};
    
    for (i = 0; i < 5; i++)
    {
        temp = temparray[0];
        pos = 0;
        int j;
        for (j = 0; j < 5; j++)
        {
            if (temparray[j]>temp)
            {
                temp = temparray[j];
                pos = j;
            } 
        }
        index[i] = pos;
        temparray[pos] = -1;
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", array[index[i]]);
    }   

    return 0;
}
