#include <stdio.h>

int main() {
    int n, a = 0, sign = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            a += i;
        } else {
            a -= i;
        }
    }

    printf("Sum of the series is: %d", a);

    return 0;
}
