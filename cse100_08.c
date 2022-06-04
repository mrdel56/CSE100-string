#include<stdio.h>
int main()
{
    char str[100];
    int i, alpha=0,number=0,special_char=0;

    printf("Enter any string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            number++;
        }
        else
        {
            special_char++;
        }
    }
    printf("Total alphabet= %d\n", alpha);
    printf("Total number= %d\n", number);
    printf("Total special character= %d\n", special_char);
    return 0;
}
