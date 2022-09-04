#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
problem website
https://www.acmicpc.net/problem/1181

[Main Points]
1. If the input word is in the array, ignore the input

2. Create a two-dimensional array

3. Merge Sort



[Solution]
1. Same as Main Points

*/

void mergeSort(char words[][51], char tmp[][51], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;

    mergeSort(words, tmp, left, mid);
    mergeSort(words, tmp, mid + 1, right);

    int l = left, m = mid + 1;
    int t = 0;

    while (l <= mid && m <= right)
    {
        if (strlen(words[l]) < strlen(words[m]))
        {
            strcpy(tmp[t++], words[l++]);
        }
        else if (strlen(words[l]) > strlen(words[m]))
        {
            strcpy(tmp[t++], words[m++]);
        }
        // If len words[l] is equals as len words[m]
        else
        {
            // When words[l] is forward in alphabetical order than words[m]
            // strcmp 는 -1 0 1 을 반환하는 것이 아니라
            // 음수 0 양수 값을 반환하므로
            // strcmp() == -1 을 사용하면 안 된다!!!!
            if (strcmp(words[l], words[m]) < 0)
            {
                strcpy(tmp[t++], words[l++]);
            }
            else
            {
                strcpy(tmp[t++], words[m++]);
            }
        }
    }
    if (l <= mid)
    {
        while (l <= mid)
        {
            strcpy(tmp[t++], words[l++]);
        }
    }
    else
    {
        while (m <= right)
        {
            strcpy(tmp[t++], words[m++]);
        }
    }
    for (int i = 0; i < right - left + 1; i++)
    {
        strcpy(words[left + i], tmp[i]);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    char words[num][51], tmp[num][51];

    for (int i = 0; i < num; i++)
    {
        scanf("%s", words[i]);
    }

    mergeSort(words, tmp, 0, num - 1);

    for (int i = 0; i < num; i++)
    {
        if (i == 0)
            printf("%s\n", words[i]);
        // 만약 이전 값과 같다면 미출력
        else if (strcmp(words[i], words[i - 1]))
            printf("%s\n", words[i]);
    }

    return 0;
}