#include <stdio.h>

int main() {
    int n;
    char c;
    int isCap = 0, isSmall = 0, isSpecial = 0, isNum = 0, i;

    for(int i = 0 ; 1; i++ ){
        printf("Enter the cardinality of the password: ");
        scanf("%d", &n);
        if (n >= 8) break;


    }

    printf("Enter Your Password: ");
    

    for (i = 0; i < n; i++) {
        scanf("%c", &c);  
        int a = c;

        if (a >= 65 && a <= 90)
            isCap = 1;
        else if (a >= 97 && a <= 122)
            isSmall = 1;
        else if (a >= 48 && a <= 57)
            isNum = 1;
        else if ((a >= 32 && a <= 47) ||
                 (a >= 58 && a <= 64) ||
                 (a >= 91 && a <= 96) ||
                 (a >= 123 && a <= 126))
            isSpecial = 1;
    }

    if (isCap && isSmall && isNum && isSpecial) {
        printf("Strong\n");
    }
    else {
        printf("Weak\n");
    }

    return 0;
}