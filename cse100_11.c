#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,length=0,flag=1;

    printf("Enter any string: "); //Delowar Hossain
    gets(str1);

    for(i=0; str1[i]!='\0'; i++)
    {
        length++;
    }
    for(j=0,i=length-1; i>=0; i--,j++)
    {
        str2[j]=str1[i]; //niassoH rawoleD
    }
    str2[j]='\0';
    printf("Reverse string= %s\n",str2);

    return 0;
}
