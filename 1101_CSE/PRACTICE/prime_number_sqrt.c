#include<stdio.h>
#include<math.h>

int main()
{
    int num  , isPrime = 1;

    for (int i  = 0 ; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 1)
        {
            isPrime = 0;
        }
        else
        {
            for (int j = 2; j <= sqrt(num); j++)
            {
                if (num % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("%d is a prime number.\n", num);
        }
        else
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

// Concept on why it work 
// usual approach check eveyr every number from 1 to n | takes maximum n-1 times
// second approach check every number from 2 to n/2 | takes maximum n/2 - 1 times
// third approach check every number from 2 to sqrt(n) | takes maximum sqrt(n) - 1 times
// Why it works ?
// there are arithmetic average and geometric average 
// n/2 usage is arithmetic average and sqrt(n) usage is geometric average