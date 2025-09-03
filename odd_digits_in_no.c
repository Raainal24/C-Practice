#include<stdio.h>
void main()
{
   int a,n=0,c;
   printf("Enter a Number\n");
   scanf("%d",&a);
   while(a!=0)
   {
        c=a%10;
        a=a/10;
         if(c%2!=0)
            printf("%d is Odd\n",c);
   }
   
}