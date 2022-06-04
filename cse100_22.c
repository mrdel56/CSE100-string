#include<stdio.h>
void trimLeadingSpace(char *);
void trimTrailingSpace(char *);

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);
    trimLeadingSpace(str);
    trimTrailingSpace(str);
    puts(str);

    return 0;
}
void trimLeadingSpace(char * str)
{
    int index,i;
    index = 0;
    while(str[index]==' ' || str[index]=='\n' || str[index]=='\t')
    {
        index++;
    }
    if(index!=0)
    {
        i=0;
        while(str[i+index]!='\0')
        {
            str[i]=str[i+index];
            i++;
        }
        str[i]='\0';
    }
}
void trimTrailingSpace(char * str)
{
    int i, index;
    index=-1;
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' '&& str[i]!='\n' && str[i]!='\t')
        {
            index=i;
        }
        i++;
    }
    str[index+1]='\0';
}
