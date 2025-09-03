#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int len, i, j, flag = 1;
    // Accept input string
    printf("Enter a string: ");
    scanf("%s", str);
    // Length of string (using inbuilt function)
    len = strlen(str);
    printf("Length of string: %d\n", len);
    // String reversal (using inbuilt function)
    strcpy(rev, str);
    strrev(rev);
    printf("Reversed string: %s\n", rev);
    // String equality check (using inbuilt function)
    char str2[100];
    printf("Enter another string to check equality: ");
    scanf("%s", str2);
    if (strcmp(str, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    // String palindrome check (without using inbuilt function)
    j = len - 1;
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        j--;
    }
    if (flag) {
        printf("String is a palindrome\n");
    } else {
        printf("String is not a palindrome\n");
    }

    return 0;
}
