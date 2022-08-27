#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/4344

[Main Points]
1. Make an array of Test cases to store grades for all students

2. Sum the grades and Find the average

3. Check how many students are above Average

4. Invert the number of students as a Percentage


[Solution]
1. Same as Main Points

*/
int main()
{
    int num, count, testCase[1000], sum, above;
    double average;

    scanf("%d", &num);
    while (num--)
    {
        scanf("%d", &count);
        sum = 0;
        above = 0;
        for (int i = 0; i < count; i++)
        {
            scanf("%d", &testCase[i]);
            sum += testCase[i];
        }
        average = (double)sum / count;
        for (int i = 0; i < count; i++)
        {
            if (average < testCase[i])
                above++;
        }
        printf("%.3f%%\n", (double)above / count * 100);
    }

    return 0;
}