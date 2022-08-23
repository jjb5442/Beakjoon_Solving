#include <stdio.h>
#include <stdlib.h>
/*
problem website
https://www.acmicpc.net/problem/3052

[Main Points]
1. Initalize the array[42] to 0

2. Increase array[i] if Remainder is i

3. Count array values bigger than 0

[Solution]
1. Same as Main Points

*/
int main()
{
    int remainder[42] = {
        0,
    };
    int num, remain = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        remainder[num % 42]++;
    }
    for (int i = 0; i < 42; i++)
    {
        if (remainder[i] > 0)
            remain++;
    }
    printf("%d", remain);

    return 0;
}