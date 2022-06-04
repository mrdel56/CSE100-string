#include <stdio.h>
#include <stdio.h>
#include <string.h>

void main()
{
    int i, count = 0, pos1, pos2;
    char str[50], key;

    printf("enter the string\n");
    gets(str);
    printf("enter character to be searched\n");
    scanf(" %c", &key);

    for (i = 0;str[i]!='\0';i++)
    {
        if (key == str[i])
        {
            count++;
            if (count  == 1)
            {
                pos1 = i;

            }
            else
            {
                pos2 = i;
            }
        }
    }
    printf("%d\n", pos1 );
}

