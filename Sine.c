#include <stdio.h>
#include <math.h>
int main()
{
int n, sign = 1;
float x, sum, fact = 1;
printf("Enter Sine Angle: ");
scanf("%f", &x);
printf("\n");
printf("Enter Number of terms: ");
scanf("%d", &n);
printf("\n");
int X = x;
x = (x * 3.1415) / 180;
int i = 1;
// runs a loop until n number of terms are evaluated
while (n-- > 0)
{
// finding factorial of selected element
for (int k = 1; k <= i; k++)
{
fact = fact * k;
}
// actual sum of series
sum = sum + (sign * (pow(x, i) / fact));
// changing sign for alternate terms
sign = sign * -1;
// adding two to term

i = i + 2;
// resetting value of factorial
fact = 1;
}
printf("sin(%d): %f\n", X, sum);
return 0;
}