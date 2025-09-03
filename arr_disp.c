#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Value of arr[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}
