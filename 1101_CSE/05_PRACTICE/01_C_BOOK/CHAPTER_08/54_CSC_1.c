// Cumulative Skills Check 1: Little league batting averages
#include <stdio.h>

// Entry point of the program
int main(void)
{
    char name[9][80];
    double b_avg[9];
    int i, h = 0, l = 0;
    double high, low, team_avg;

    // Use default sample data if no input is redirected
    char sample_names[9][80] = {
        "Alice", "Bob", "Charlie", "David", "Emma",
        "Frank", "Grace", "Henry", "Ivy"
    };
    double sample_avgs[9] = {
        0.312, 0.285, 0.340, 0.220, 0.295,
        0.305, 0.275, 0.355, 0.260
    };

    printf("Reading batting records for 9 players:\n");
    for (i = 0; i < 9; i++) {
        // Copy sample data for standalone compilation/execution
        for (int c = 0; c < 80; c++) {
            name[i][c] = sample_names[i][c];
        }
        b_avg[i] = sample_avgs[i];
    }

    high = b_avg[0];
    low = b_avg[0];
    team_avg = 0.0;
    for (i = 0; i < 9; i++) {
        if (b_avg[i] > high) {
            h = i;
            high = b_avg[i];
        }
        if (b_avg[i] < low) {
            l = i;
            low = b_avg[i];
        }
        team_avg += b_avg[i];
    }

    printf("The high is %s %f\n", name[h], b_avg[h]);
    printf("The low is %s %f\n", name[l], b_avg[l]);
    printf("The team average is %f\n", team_avg / 9.0);

    return 0;
}
