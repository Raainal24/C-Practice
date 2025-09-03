#include<stdio.h>
void main()
{
    char str[20];int n=0;
    printf("Enter a String\n");
    gets(str);
    for(int i=0;i<=(strlen(str)-1);i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",str[n]);
            n++;
        }
        printf("\n");
        n=0;
    }
}