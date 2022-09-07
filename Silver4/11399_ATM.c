#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/11399

[Main Points]
1. Merge Sort the input value

2.  1
    1 + 2
    1 + 2 + 3
    1 + 2 + 3 + 3
    1 + 2 + 3 + 3 + 4

    1 * 5 + 2 * 4 + 3 * 3 + 3 * 2 + 4 * 1

    => arr[0] * (5 - 0) + arr[1] * (5 - 1) .....

[Solution]
1. Same as Main Points

*/

void mergeSort(int *time, int *tmp, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeSort(time, tmp, left, mid);
    mergeSort(time, tmp, mid + 1, right);

    int l = left, m = mid + 1, t = 0;

    while (l <= mid && m <= right)
    {
        if (time[l] < time[m])
            tmp[t++] = time[l++];
        else
            tmp[t++] = time[m++];
    }
    if (m > right)
    {
        while (l <= mid)
            tmp[t++] = time[l++];
    }
    else
    {
        while (m <= right)
            tmp[t++] = time[m++];
    }
    for (int i = 0; i < right - left + 1; i++)
        time[left + i] = tmp[i];
}

int main()
{
    int num;
    scanf("%d", &num);

    int time[num], tmp[num], sum = 0;
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &time[i]);
    }

    mergeSort(time, tmp, 0, num - 1);

    for (int i = 0; i < num; i++)
    {
        sum += time[i] * (num - i);
    }

    printf("%d", sum);

    return 0;
}