#include <stdio.h>
int main(){
    int a,n,sum;
    printf("Type till which number u want the sum of\n");
    scanf("%d",&n);
    a=1;
    while(a!=n)
    {
        if(a%2==0)
        {
            a=a+1;
        }
        else
        {
            sum=sum+a;
            a=a+1;
        }
    }
    printf("\nThe sum is %d",sum);
}