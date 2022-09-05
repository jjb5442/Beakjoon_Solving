#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/2839

[Main Points]
1. Decrement by 3 until the last digit is 0 or 5

2. Divide by 5 when the last digit is 0 or 5.

[Solution]
1. Same as Main Points

*/

int main()
{
    int num;
    scanf("%d", &num);

    int threeKilo = 0, fiveKilo = 0;

    while (num > 0)
    {
        if (num % 10 == 0 || num % 10 == 5)
            break;
        num -= 3;
        threeKilo++;
    }

    // If the value is not divisible by 3 or 5
    if (num < 0)
    {
        printf("-1");
    }
    else
    {
        // Prevent divided by zero exception
        if (num > 0)
            fiveKilo = num / 5;
        printf("%d", threeKilo + fiveKilo);
    }

    return 0;
}