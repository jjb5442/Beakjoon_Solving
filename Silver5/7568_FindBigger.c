#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/7568

[Main Points]
1. If there is a bigger person with weight and height,
  Rank++

[Solution]
1. Same as Main Points

*/

int main()
{
    int num;

    scanf("%d", &num);

    int people[num][2], rank;

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &people[i][0], &people[i][1]);
    }

    for (int i = 0; i < num; i++)
    {
        int rank = 1;
        for (int j = 0; j < num; j++)
        {
            if (people[i][0] < people[j][0] && people[i][1] < people[j][1])
                rank++;
        }
        printf("%d ", rank);
    }

    return 0;
}