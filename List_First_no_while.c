#include<stdio.h>
void main()
{
   int n,a=1;
   printf("Enter till where you want to display\n ");
   scanf("%d",&n);
   while(n!=0)
   {
         n--;
        printf(" %d\n",a++);
        
   }
   
}