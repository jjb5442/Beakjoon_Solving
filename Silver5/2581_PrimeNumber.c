#include <stdio.h>
#include <math.h>

/*
problem website
https://www.acmicpc.net/problem/2581

[Main Points]
1. Use Prime Number algorithm (Sieve of Eratosthenes)

- Start From 3
- Delete Even (Except 2)
- If Meet Prime number, Delete all it's multiple
- Loop until sqrt(number)

[Solution]
1.

*/

int main()
{
    int min, max;

    scanf("%d %d", &min, &max);

    int primeNum[max + 1];
    int sum = 0, minPrime = 10000;

    for (int i = 0; i <= max; i++)
    {
        primeNum[i] = 0;
    }

    for (int i = 2; i <= sqrt(max); i++)
    {
        if (primeNum[i] == 0)
        {
            for (int j = 2; i * j <= max; j++)
            {
                primeNum[i * j] = 1;
            }
        }
    }
    primeNum[1] = 1;

    for (int i = min; i <= max; i++)
    {
        if (primeNum[i] == 0)
        {
            sum += i;
            if (minPrime > i)
                minPrime = i;
        }
    }

    if (sum == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, minPrime);
    }
    return 0;
}