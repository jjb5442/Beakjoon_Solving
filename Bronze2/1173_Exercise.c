#include <stdio.h>
#include <math.h>
/*
problem website
https://www.acmicpc.net/problem/1173

[Main Points]
1. If Rest value is bigger than M - m, R = M - m

2. Train value is should be smaller or same as M - m

3. If x + train <= diff => train  else   rest

[Solution]
1. Broute Force

*/
int main()
{
    int trainTime, restTime, sum = 0;
    int train, rest, min, max, diff, x = 0;

    scanf("%d %d %d %d %d", &trainTime, &min, &max, &train, &rest);
    diff = max - min;
    if (train > diff)
        sum = -1;

    else if (train * trainTime <= diff)
        sum = trainTime;

    else
    {
        rest = rest < diff ? rest : diff;
        while (trainTime)
        {
            if (x + train <= diff)
            {
                x += train;
                trainTime--;
            }
            else
            {
                x -= rest;
                x = x > 0 ? x : 0;
            }
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}