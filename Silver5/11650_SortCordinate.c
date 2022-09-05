#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/11650

[Main Points]
1. Get cordinates as two-dimensional array

2. Use merge sort


[Solution]
1. Same as Main Points

*/

int arrcmp(int *a, int *b)
{
    // left > right
    if (a[0] > b[0])
        return 1;
    // left < right
    else if (a[0] < b[0])
        return -1;
    // left == right
    // Compare second digit
    else
    {
        // left > right
        if (a[1] > b[1])
            return 1;
        // left <= right
        // It should be better code if Add code
        // left == right return 0;
        else
            return -1;
    }
}

void mergeSort(int cordinate[][2], int tmp[][2], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeSort(cordinate, tmp, left, mid);
    mergeSort(cordinate, tmp, mid + 1, right);

    int l = left, m = mid + 1, t = 0;
    while (l <= mid && m <= right)
    {
        if (arrcmp(cordinate[l], cordinate[m]) == -1)
        {
            tmp[t][0] = cordinate[l][0];
            tmp[t++][1] = cordinate[l++][1];
        }
        else
        {
            tmp[t][0] = cordinate[m][0];
            tmp[t++][1] = cordinate[m++][1];
        }
    }
    if (l > mid)
    {
        while (m <= right)
        {
            tmp[t][0] = cordinate[m][0];
            tmp[t++][1] = cordinate[m++][1];
        }
    }
    else
    {
        while (l <= mid)
        {
            tmp[t][0] = cordinate[l][0];
            tmp[t++][1] = cordinate[l++][1];
        }
    }
    for (int i = 0; i < right - left + 1; i++)
    {
        cordinate[left + i][0] = tmp[i][0];
        cordinate[left + i][1] = tmp[i][1];
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int cordinate[num][2], tmp[num][2];

    for (int i = 0; i < num; i++)
    {
        scanf("%d %d", &cordinate[i][0], &cordinate[i][1]);
    }

    mergeSort(cordinate, tmp, 0, num - 1);

    for (int i = 0; i < num; i++)
    {
        printf("%d %d\n", cordinate[i][0], cordinate[i][1]);
    }

    return 0;
}