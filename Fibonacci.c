#include <stdio.h>
void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n-1, b, a+b);
    }
}
int main() {
    int n;
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    fibonacci(n, 0, 1);
    return 0;
}
