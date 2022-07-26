#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1085

[Main Points]
1. How to calculate distance to border


[Solution]
1. Width should be w - x or x - 0

2. Height should be h - y or h - 0

3. Find more smaller value

*/
int main()
{
    int x, y, w, h;
    int width, height, distance;

    scanf("%d %d %d %d", &x, &y, &w, &h);

    width = (w - x) < x ? (w - x) : x;
    height = (h - y) < y ? (h - y) : y;

    distance = width < height ? width : height;

    printf("%d", distance);

    return 0;
}