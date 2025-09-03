#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter the number that you want to multiply");
    scanf("%d",&a);
    printf("Ente till where you want it to be multiplied");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        c=a*i;
        printf("%d * %d= %d\n",a,i,c);
    }
}