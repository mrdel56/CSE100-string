#include <stdio.h>

int countWords(char *);

int main()
{

    char testString[100];

    gets(testString);

    printf("Total Words = %d\n", countWords(testString));

    return 0;
}

int countWords(char *s)
{
    int i = 0;
    int words = 0;

    while (1)
    {

        if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == '\0')
        {
            words++;
        }

        if (s[i + 1] == '\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }

    return words;
}
