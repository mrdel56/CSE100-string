#include<stdio.h>

void trimLeadingSpace(char *);
int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);

    trimLeadingSpace(str);
    puts(str);
    return 0;
}

void trimLeadingSpace(char * str)
{
    int i,index;
    index = 0;
    while(str[index]== ' ' || str[index]== '\t' || str[index]== '\n')
    {
        index++;
    }
    if(index!=0)
    {
        i=0;
        while(str[i+index]!= '\0')
        {
            str[i]=str[i+index];
            i++;
        }
        str[i]='\0';
    }
}
