#include<stdio.h>
int main()
{
    char str[100];
    int i, consonant=0, vowel=0, space=0;

    printf("Enter any string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122))
        {
           if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='o' || str[i]=='O' || str[i]=='i' || str[i]=='I' || str[i]=='u' || str[i]=='U')
            {
                vowel++;
            }
        //else if(str[i]==' '){space++;}
        else
            {
                consonant++;
            }
        }

    }
    printf("Total consonant: %d\n", consonant);
    printf("Total vowel: %d",vowel);
    return 0;
}
