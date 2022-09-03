#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
problem website
https://www.acmicpc.net/problem/1427

[Main Points]
1. Merge Sort in descending order

[Solution]
1. Same as Main Points

*/

void mergeSort(char *num, char *tmp, int left, int right)
{
    if (left >= right)
        return;
    int mid = (left + right) / 2;

    mergeSort(num, tmp, left, mid);
    mergeSort(num, tmp, mid + 1, right);

    int l = left, m = mid + 1, t = 0;
    while (l <= mid && m <= right)
    {
        if (num[l] < num[m])
        {
            tmp[t++] = num[m++];
        }
        else
        {
            tmp[t++] = num[l++];
        }
    }
    if (l > mid)
    {
        while (m <= right)
        {
            tmp[t++] = num[m++];
        }
    }
    else
    {
        while (l <= mid)
        {
            tmp[t++] = num[l++];
        }
    }
    for (int i = 0; i < right - left + 1; i++)
    {
        num[left + i] = tmp[i];
    }
}

int main()
{
    char *num = (char *)malloc(sizeof(char) * 11);

    scanf("%s", num);
    int size = strlen(num);

    char *tmp = (char *)malloc(sizeof(char) * (size + 1));

    mergeSort(num, tmp, 0, size - 1);

    printf("%s", num);

    free(num);
    free(tmp);
    return 0;
}