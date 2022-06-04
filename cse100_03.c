#include<stdio.h>
int main()
{

    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("The string is: %s",s1);
}
