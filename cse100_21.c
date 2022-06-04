#include<stdio.h>
void trimTrailingSpace(char*);

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);

    trimTrailingSpace(str);
    puts(str);

    return 0;
}
void trimTrailingSpace(char * str)
{
    int i, index;
    index=-1;

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ' && str[i]!='\n' && str[i]!='\t')
        {
            index = i;
        }
        i++;
    }
    str[index + i] = '\0';
}
