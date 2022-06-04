#include<stdio.h>
int main()
{
    char str[100], search_ch;
    int i,count=0;

    printf("Enter any string: ");
    gets(str);
    printf("Enter searching character: ");
    scanf("%c",&search_ch);

    for(i=0; str[i]!='\0'; i++)
    {
        if(search_ch == str[i])
        {
            count++;
        }
    }
    printf("%c character is found total %d times\n",search_ch, count);
    return 0;
}

