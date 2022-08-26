#include <stdio.h>
#include <stdlib.h>
/*
problem website
https://www.acmicpc.net/problem/2675

[Main Points]
1. Get Test Case count

2. Print the string repeatedly as many times as
  the received value

[Solution]
1. Same as Main Points

*/
int main()
{
    int count, repeat;
    char testCase[21];

    scanf("%d", &count);
    while (count--)
    {
        scanf("%d %s", &repeat, testCase);
        for (int i = 0; testCase[i] != '\0'; i++)
        {
            for (int j = 0; j < repeat; j++)
                printf("%c", testCase[i]);
        }
        printf("\n");
    }

    return 0;
}