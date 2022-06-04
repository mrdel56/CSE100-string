#include<stdio.h>
void removeExtraSpace(char *, char *);

int main()
{

    char str[100];
    char trimedString[100];
    gets(str);

    removeExtraSpace(str,trimedString);
    puts(trimedString);

    return 0;
}
void removeExtraSpace(char*str, char*trimedString)
{
    int i=0,j=0;

    while(str[i]!='\0')
    {
        if(str[i]== ' ')
        {
            trimedString[j]= ' ';
            j++;

            while(str[i]==' ')
            {
                i++;
            }

        }
        trimedString[j]=str[i];
        i++;
        j++;
    }
    trimedString[j]='\0';

}
