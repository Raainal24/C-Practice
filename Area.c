#include<stdio.h>
void main()
{
   int b,h,s,r;
   double a=1;
   printf("Enter base and hieght of triangle\n");
   scanf("%d%d",&b,&h);
   a=0.5*b*h;
   printf("Area of triangle is %f\n",a);

   printf("Enter side of square\n");
   scanf("%d",&s);
   a=s*s;
   printf("Area of Square is %f\n",a);

   printf("Enter Radius of Circle\n");
   scanf("%d",&r);
   a=(22/7)*r*r;
   printf("Area of triangle is %f\n",a);
}