#include <stdio.h>
#include <stdlib.h>

/*
problem website
https://www.acmicpc.net/problem/1018

[Main Points]
1. Get value using char arr[n][m]

2. Check if starting value is B or W

3. Use nested loops to check if the values are correct

[Solution]
1. Same as Main Points

*/

int countWrongChecker(char **checkerBoard, int startColumn, int startRow)
{
    int wrongCountW = 0, wrongCountB = 0;

    // Case 'W'
    char rightColor = 'W';

    for (int i = startColumn; i < startColumn + 8; i++)
    {
        for (int j = startRow; j < startRow + 8; j++)
        {
            if (rightColor != checkerBoard[i][j])
                wrongCountW++;

            // Reverse Color
            rightColor = rightColor != 'W' ? 'W' : 'B';
        }

        // Reverse color one more time because row is even
        rightColor = rightColor != 'W' ? 'W' : 'B';
    }

    // Case 'B'
    rightColor = 'B';

    for (int i = startColumn; i < startColumn + 8; i++)
    {
        for (int j = startRow; j < startRow + 8; j++)
        {
            if (rightColor != checkerBoard[i][j])
                wrongCountB++;

            // Reverse Color
            rightColor = rightColor != 'W' ? 'W' : 'B';
        }

        // Reverse color one more time because row is even
        rightColor = rightColor != 'W' ? 'W' : 'B';
    }

    return wrongCountW < wrongCountB ? wrongCountW : wrongCountB;
}

int main()
{
    int row, column, wrongCountMin = 64;
    scanf("%d %d", &column, &row);

    // There is a '\0' at the end of string,
    // So I increase the width by 1
    char **checkerBoard = (char **)malloc(sizeof(char *) * (column));

    for (int i = 0; i < column; i++)
    {
        checkerBoard[i] = (char *)malloc(sizeof(char) * (row + 1));
    }

    for (int i = 0; i < column; i++)
        scanf("%s", checkerBoard[i]);

    for (int i = 0; column - i >= 8; i++)
    {
        for (int j = 0; row - j >= 8; j++)
        {
            int wrongCount = countWrongChecker(checkerBoard, i, j);
            wrongCountMin = wrongCountMin < wrongCount ? wrongCountMin : wrongCount;
        }
    }

    printf("%d", wrongCountMin);

    for (int i = 0; i < column; i++)
    {
        free(checkerBoard[i]);
    }
    free(checkerBoard);

    return 0;
}