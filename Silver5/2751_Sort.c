#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/2751

[Main Points]
1. Quick Sort
     최악의 경우 시간 복잡도가 좋지 않아
     시간초과가 나옴!!!!

     알고리즘 문제를 풀때에는 병합 정렬로!!!

3 1 4 2 5

2. Merge Sort



[Solution]
1. same as Main Points

*/

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void mergeSort(int *arr, int left, int right)
{
    if (left >= right)
        return;

    int middle = (left + right) / 2;
    // m을 middle + 1 로 잡아야 배열을 정확히 반으로 나눌 수 있음!!!
    // 그렇지 않으면 이상하게 정렬됨!!
    int l = left, m = middle + 1, i = 0;

    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    int tmp[right - left + 1];

    while (l <= middle && m <= right)
    {
        if (arr[l] < arr[m])
        {
            tmp[i++] = arr[l++];
        }
        else
        {
            tmp[i++] = arr[m++];
        }
    }
    if (l > middle)
    {
        while (m <= right)
        {
            tmp[i++] = arr[m++];
        }
    }
    else
    {
        while (l <= middle)
        {
            tmp[i++] = arr[l++];
        }
    }
    for (int j = 0; j < i; j++)
    {
        arr[left + j] = tmp[j];
    }
}

// void quickSort(int *arr, int left, int right)
// {
//     if (left >= right)
//         return;

//     int l = left + 1, r = right;
//     int pivot = arr[left];
//     while (l <= r)
//     {
//         while (arr[r] > pivot && r > left)
//             r--;
//         // l <= right 매우 중요!!
//         while (arr[l] < pivot && l <= right)
//             l++;
//         if (l < r)
//             swap(arr + l, arr + r);
//         else
//             swap(arr + left, arr + r);
//     }
//     quickSort(arr, left, r - 1);
//     quickSort(arr, r + 1, right);
// }

int main()
{
    int num;

    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }

    // quickSort(arr, 0, num - 1);

    mergeSort(arr, 0, num - 1);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}