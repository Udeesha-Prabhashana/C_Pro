#include <stdio.h>

//finished


int charCount(char str[20])
{
    int totchar = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        totchar++;
    }
    return totchar;
}

int condition1(char str[20])
{

    printf("Condition 01 : There are exactly 8 characters\n\t\t\t\t");
    if (charCount(str) == 8)
    {
        printf("The first condition satisfied\n\n");
        return 1;
    }
    else
    {
        printf("The first condition does not satisfied: No 8 characters there\n\n");
        return 0;
    }
    
}

int condition2(char str[20])
{
    printf("Condition 02 : First letter should be 'S'\n\t\t\t\t");

    if (str[0] == 'S')
    {
        printf("The second condition satisfied\n\n");
        return 1;
    }
    else
    {
        printf("The second condition does not satisfied: First letter is not 'S'\n\n");
        return 0;
    }
}

int condition3(char str[20])
{

    int totdash = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]=='/')
        {
            totdash++;
        }
    }

    printf("Condition 03 : There should be exactly two digits between two '/'\n\t\t\t\t");

    if (totdash==2)
    {
        printf("The third condition satisfied\n\n");
        return 1;
    }
    else
    {
        printf("The third condition does not satisfied: Must be have two '/'\n\n");
        return 0;
    }
}

int condition4(char str[20])
{
    int ind1, ind2, digits;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]=='/')
        {
            ind1 = i;
            for (int j = i+1; str[j] != '\0'; j++)
            {
                if(str[j]=='/')
                {
                    digits = j-i-1;
                    break;
                }
            }
        }
    }

    printf("Condition 04 : The year is represented by two digits in between two '/'s\n\t\t\t\t");

    if (digits==2)
    {
        printf("The forth condition satisfied\n\n");
        return 1;
    }
    else
    {
        printf("The forth condition does not satisfied: Must be have two digits between '/'s\n\n");
        return 0;
    }
}

int condition5(char str[20])
{
    int count = 0;
    for (int i = charCount(str)-3; i < charCount(str); i++)
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            count++;
        }
        
    }
    
    printf("Condition 05 : Last three digits immediately after the second slash represents the student number\n\t\t\t\t");

    if (count==3)
    {
        printf("The fifth condition satisfied\n");
        return 1;
    }
    else
    {
        printf("The fifth condition does not satisfied: No integer representation\n");
        return 0;
    }
}

int main()
{
    while (1)
    {
        char number[20];
        printf("Enter the number: ");
        gets(number);

        printf("------------------------------Validating Registation number : %s --------------------------\n\n", number);
        
        int valid = condition1(number) +condition2(number) +condition3(number)+condition4(number)+condition5(number);
        
        printf("\n------------------------------The registation number is ");
        if (valid ==5)
        {
            printf("valid ------------------------------------\n\n");
        }
        else
        {
            printf("Not Valid ---------------------------------\n\n");
        }
        
    }
        return 0;
}