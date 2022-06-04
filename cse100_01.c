#include<stdio.h>
int main()
{

    char s[100];
    int i, length=0;

    printf("Inter a string: ");
    gets(s);

    for(i=0; s[i]!= '\0'; i++)
    {
        length++;
    }
    printf("Length of the string is: %d",length);
    return 0;
}


