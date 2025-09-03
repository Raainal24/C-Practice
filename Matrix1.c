#include<stdio.h>
int main () {
   int i,j;
   int a[20][20];

    printf("enter elements of matrix a ");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    
     printf("elements are ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}