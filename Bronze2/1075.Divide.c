#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1075

[Main Points]
1. How to find smaller two digits from the back

2. Don't care about what was init two digits form the back


[Solution]
1. Set two digits from the back to 99

2. Plus by 1 while num is smaller than 99

*/
int main()
{
    int num, divide, result = 99;
    scanf("%d %d", &num, &divide);

    num = (num / 100) * 100;

    while (num % 100 < 99)
    {
        if (num % divide == 0)
        {
            result = num % 100;
            break;
        }
        num++;
    }

    if (result > 9)
        printf("%d", result);
    else
        printf("0%d", result);

    return 0;
}