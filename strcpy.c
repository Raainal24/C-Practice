#include<stdio.h>
void main()
{
    char str[20];
    printf("Enter a String\n");
    gets(str);
    char str2[20];
    for(int i=0;i<=(strlen(str)-1);i++)
    {
        str2[i]=str[i];
    }
    str2[strlen(str)] = '\0';
    printf("%s",str2);
}