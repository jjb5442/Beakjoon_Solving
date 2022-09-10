#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1920

[Main Points]
1. Do merge sort on Searching area

2. Searches from the start of the Searching area
   Until it finds a value bigger than or equal
   to the  value you are looking for

[Solution]
1. Binary Search

  1 2 3 4 5 6 7
  Find : 6
  1 4 7     start = pivot + 1
  5 6 7     Find!

  1 2 3 4 5 6 7 8 9 10 11 12 13
  Find : 9
  1 7 13    start = pivot + 1
  8 10 13   end = pivot - 1
  8 9 9     Find!

  Find : 8.5
  1 7 13    start = pivot + 1
  8 10 13   end = pivot - 1
  8 9 9     start = pivot + 1
  10 9 9    None!
ref : https://beginnerdeveloper-lit.tistory.com/15

이진 탐색의 시간복잡도는 O(log_2 n), 이중 for문의 시간복잡도는 O(n^2)이다

*/

void mergeSort(int *searchArea, int *tmp, int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    mergeSort(searchArea, tmp, left, mid);
    mergeSort(searchArea, tmp, mid + 1, right);

    int l = left, m = mid + 1, t = 0;

    while (l <= mid && m <= right)
    {
        if (searchArea[l] < searchArea[m])
            tmp[t++] = searchArea[l++];
        else
            tmp[t++] = searchArea[m++];
    }

    if (m > right)
    {
        while (l <= mid)
            tmp[t++] = searchArea[l++];
    }
    else
    {
        while (m <= right)
            tmp[t++] = searchArea[m++];
    }

    for (int i = 0; i < right - left + 1; i++)
    {
        searchArea[left + i] = tmp[i];
    }
}

int findValue(int *searchArea, int key, int size)
{
    int start, end, pivot;
    start = 0;
    end = size - 1;

    while (1)
    {
        pivot = (start + end) / 2;
        if (searchArea[pivot] == key)
            return 1;
        if (searchArea[start] == key)
            return 1;
        if (searchArea[end] == key)
            return 1;

        if (searchArea[pivot] < key)
            start = pivot + 1;
        else
            end = pivot - 1;

        if (start >= end)
            return 0;
    }
}

int main()
{
    int num1;
    scanf("%d", &num1);

    int searchArea[num1], tmp[num1];
    for (int i = 0; i < num1; i++)
        scanf("%d", &searchArea[i]);

    int num2;
    scanf("%d", &num2);

    int searchValue[num2];
    for (int i = 0; i < num2; i++)
        scanf("%d", &searchValue[i]);

    mergeSort(searchArea, tmp, 0, num1 - 1);

    for (int i = 0; i < num2; i++)
    {
        int result = findValue(searchArea, searchValue[i], num1);
        printf("%d\n", result);
    }

    return 0;
}