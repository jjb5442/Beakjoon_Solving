#include <stdio.h>
#include <math.h>
/*
problem website
https://www.acmicpc.net/problem/1293

[Main Points]
1. height = wide * (H / W)

2. D * D = height * height + wide * wide



[Solution]
1. Merge Main Point 1 and 2

2. d * d = wide * ratio * wide * ratio + wide * wide
 => d * d = wide * wide * (ratio * ratio + 1)
 => wide * wide = d * d / (ratio * ratio + 1)
 => wide = sqrt(d * d / (ratio * ratio + 1))
*/
int main()
{
    int d, h, w;
    double ratio, height, wide;
    scanf("%d %d %d", &d, &h, &w);
    ratio = (double)h / w;
    wide = sqrt((double)d * d / (ratio * ratio + 1));
    height = wide * ratio;
    printf("%d %d", (int)height, (int)wide);

    return 0;
}