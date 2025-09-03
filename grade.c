#include <stdio.h>

int main() {
    int marks,m,s,c,p,e;

    printf("Enter the marks obtained: ");
    scanf("%d\t%d\t%d\t%d\t%d", &m,&s,&c,&p,&e);
    marks=(m+s+c+p+e)/5;
    if (marks >= 75 && marks <= 100) {
        printf("Class: A+\n");
    } 
    else if (marks >= 60 && marks <= 74) {
        printf("Class: A\n");
    }
     else if (marks >= 50 && marks <= 59) {
        printf("Class: B\n");
    } 
    else if (marks >= 40 && marks <= 49) {
        printf("Class: c\n");
    }
    else {
        printf("Class: F\n");
    }

    return 0;
}
