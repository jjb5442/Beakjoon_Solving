#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1065

[Main Points]
1.1 ~ 99 is all arithmetic number

2. If the value is bigger than 100,
  the tolerance increases from 1 to find a arithmetic number

[Solution]
1. Same as Main Points

*/

int checkNum(int num)
{
    if (num >= 0 && num < 10)
        return 1;
    else
        return 0;
}

int main()
{
    int num;
    scanf("%d", &num);

    // If num < 100, then all numbers are arithmetic number
    if (num < 100)
    {
        printf("%d", num);
        return 0;
    }

    int arithmetic = 99;

    // Find the arithmetic number by incrementing j and i
    for (int j = 1; j <= num / 100; j++)
    {
        for (int i = -4; i < 5; i++)
        {
            int a = j;
            int b = j + i;
            int c = j + i + i;

            // If all digit is nutural number or 0
            if (checkNum(a) && checkNum(b) && checkNum(c))
            {
                int abc = a * 100 + b * 10 + c;
                if (abc <= num)
                {
                    arithmetic++;
                }
            }
        }
    }

    printf("%d", arithmetic);

    return 0;
}