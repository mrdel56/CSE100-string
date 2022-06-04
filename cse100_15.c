#include<stdio.h>
int main()
{
    char str[100], search_ch;
    int i;

    printf("Enter any string: ");
    gets(str);
    printf("Enter searching character: ");
    scanf("%c",&search_ch);

    for(i=0; str[i]!='\0'; i++)
    {
        if(search_ch == str[i])
        {
            printf("%c is found in index %d\n",search_ch,i);
        }
    }
    return 0;
}
