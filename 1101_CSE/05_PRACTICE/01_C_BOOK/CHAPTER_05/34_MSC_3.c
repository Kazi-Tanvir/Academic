// Mastery Skills Check 3: Mode of 20 numbers
#include <stdio.h>

// Entry point of the program
int main(void)
{
    int stats[20], i, j;
    int mode = 0, count, oldcount = 0, oldmode = 0;

    printf("Enter 20 numbers:\n");
    for(i = 0; i < 20; i++) scanf("%d", &stats[i]);

    for(i = 0; i < 20; i++) {
        mode = stats[i];
        count = 1;
        for(j = i + 1; j < 20; j++) {
            if(mode == stats[j]) count++;
        }
        if(count > oldcount) {
            oldmode = mode;
            oldcount = count;
        }
    }
    printf("The mode is %d\n", oldmode);

    return 0;
}
