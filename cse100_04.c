#include<stdio.h>
int main()
{
    int i, flag=1;
    char str1[100], str2[100];

    gets(str1);
    gets(str2);

    for(i=0;  ; i++)
    {
        if(str1[i]> str2[i])
        {
          flag = 0;
          printf("Large: %s\n",str1);
          printf("Small: %s\n",str2);
          break;
        }
        else if(str1[i] < str2[i])
        {
            flag = 0;
            printf("Large: %s\n",str2);
            printf("Small: %s\n",str1);
            break;
        }
        else if(str1[i]=='\0' || str2[i]=='\0') break;
    }
    if(flag==1)
    {
      printf("Same\n");
    }
}
