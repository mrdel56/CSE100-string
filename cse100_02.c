#include<stdio.h>
int main()
{
    char s1[100], s2[100];
    int i, j=0;
    printf("Inter any string: ");
    gets(s1);

    for(i=0; s1[i]!= '\0'; i++)
    {
        s2[j++]=s1[i];
    }
    s2[j++]='\0';
    printf("Copy of the string: %s",s2);
    return 0;
}
