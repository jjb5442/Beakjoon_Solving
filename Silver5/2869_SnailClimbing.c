#include <stdio.h>
#include <math.h>

/*
problem website
https://www.acmicpc.net/problem/2869

[Main Points]
1. Increase x by (climb - sleep) until height - climb

2. If climb == height => return 1

3. ceil((Height - Climb) / (Climb - sleep)) + 1

[Solution]
1. Same as Main Points

*/

int main()
{
    int climb, sleep, height;

    scanf("%d %d %d", &climb, &sleep, &height);

    if (climb == height)
    {
        printf("%d", 1);
        return 0;
    }

    printf("%d", (int)ceil((double)(height - climb) / (climb - sleep)) + 1);

    return 0;
}