#include<stdio.h>
#include<string.h>

int compare(char s[])
{
    int a, b, c,d;
    a= s[0] == 'i'?1:0;
    b= s[1] == 'n'?1:0;
    c= s[2] == 'g'?1:0;

    d = a && b && c;
    
    return d;
}

int main()
{
    char s[20], check[3]="ing";
    printf("enter a string: ");
    gets(s);

    int len = strlen(s);

    if (len<3)
    {
        printf("%s",s);
    }
    else
    {
        char temp[3];
        strncpy(temp,&s[len-3],3);
        
        int res = compare(temp);


        if (res==1)
        {
            strcat(s,"ly");
            printf("%s",s);
        }
        else
        {
            strcat(s,"ing");
            printf("%s",s);
        }
        
        
        
        
    }
    
    return 0;
}
