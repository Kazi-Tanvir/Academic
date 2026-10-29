// Example 10.1.5: Member names do not conflict with local variables
#include <stdio.h>

struct s_type {
    int count;
    float value;
};

// Entry point of the program
int main(void)
{
    int count = 10;
    struct s_type s;

    s.count = 25;
    s.value = 3.14f;

    printf("Local count: %d, Struct count: %d, Value: %f\n", count, s.count, s.value);

    return 0;
}
