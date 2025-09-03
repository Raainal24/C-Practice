#include <stdio.h>

int main() {
    int eng, hin, phy, chem, maths;
    
    printf("Enter English marks: ");
    scanf("%d", &eng);
    printf("Enter Hindi marks: ");
    scanf("%d", &hin);
    printf("Enter Physics marks: ");
    scanf("%d", &phy);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);
    printf("Enter Maths marks: ");
    scanf("%d", &maths);
    
    int t = eng + hin + phy + chem + maths;
    printf("Total marks are: %d\n", t);
    
    int pct = (t / 500.0) * 100;
    
    if (pct >= 90) 
    {
        printf("Grade is A+\n");
    }
     else if (pct<90&& pct>=80 )
    {
       printf("Grade is A\n");
    }
     else if (pct<80&&pct >= 40) {
        printf("Grade is B+\n");
    }
     else
    {
        printf("Failed and KT. Try next time\n");
    }
    
    return 0;
}
