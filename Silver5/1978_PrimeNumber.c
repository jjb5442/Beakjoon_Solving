#include <stdio.h>
#include <math.h>

/*
problem website
https://www.acmicpc.net/problem/1978

[Main Points]
1. Use Prime Number algorithm (Sieve of Eratosthenes)

- Start From 3
- Delete Even (Except 2)
- If Meet Prime number, Delete all it's multiple
- Loop until sqrt(number)

[Solution]
1.

*/

#define SIZE 1000

int main()
{
    int prime[SIZE + 1] = {0};

    prime[1] = 1;
    // Loop until sqrt(number)
    for (int i = 2; i <= sqrt(SIZE); i++)
    {
        // If not deleted number
        if (prime[i] == 0)
        {
            // Loop until number
            for (int j = 2; i * j <= SIZE; j++)
            {
                prime[i * j] = 1;
            }
        }
    }

    int count, primeCount = 0;
    int checkPrime;

    scanf("%d", &count);

    while (count--)
    {
        scanf("%d", &checkPrime);
        if (prime[checkPrime] == 0)
            primeCount++;
    }

    printf("%d", primeCount);

    return 0;
}