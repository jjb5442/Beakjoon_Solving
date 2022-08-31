#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1546

[Main Points]
1. Create array grade[] to store all inputs

2. Find Max in the grade[]

3. Print Sum of all elements / Max * 100


[Solution]
1. Instead of creating an array, use sum variable to store the sum of all elements

2. Get average by Sum / (max * count) * 100

*/
int main()
{
    int max = 0, sum = 0;
    int grade, count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &grade);
        if (max < grade)
            max = grade;
        sum += grade;
    }
    printf("%f", (double)sum / (max * count) * 100);

    return 0;
}