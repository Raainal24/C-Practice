#include<stdio.h>
void main()
{
   int a,n=0;
   printf("Enter a Number");
   scanf("%d",&a);
   while(a!=0)
   {
        a=a/10;
        n++;
   }
   printf("Number of Digits is %d",n);
}