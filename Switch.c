//Amal Nair
#include <stdio.h>
#include <math.h>
int main() {
    int choice, num, i, isPrime = 1, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter your choice:\n1. Compute square root\n2. Compute square\n3. Compute cube\n");
    printf("4. Check for prime\n5. Compute factorial\n6. Compute prime factors\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("The square root of %d is %.2f\n", num, sqrt(num));
            break;
        case 2:
            printf("The square of %d is %d\n", num, num*num);
            break;
        case 3:
            printf("The cube of %d is %d\n", num, num*num*num);
            break;
        case 4:
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d is a prime number.\n", num);
            } else {
                printf("%d is not a prime number.\n", num);
            }
            break;
        case 5:
            for (i = 1; i <= num; ++i) {
                factorial *= i;
            }
            printf("The factorial of %d is %d\n", num, factorial);
            break;
        case 6:
            printf("The prime factors of %d are: ", num);
            for (i = 2; i <= num; ++i) {
                while (num % i == 0) {
                    printf("%d ", i);
                    num /= i;
                }
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
    return 0;
}