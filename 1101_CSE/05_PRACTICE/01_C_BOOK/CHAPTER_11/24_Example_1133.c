// Example 11.3.3: Enumeration constants with assigned integer values
#include <stdio.h>

enum error_codes {
    no_error = 0,
    file_not_found = 10,
    access_denied = 11,
    disk_full = 20
};

// Entry point of the program
int main(void)
{
    enum error_codes err = access_denied;
    printf("Error code: %d\n", err);

    return 0;
}
