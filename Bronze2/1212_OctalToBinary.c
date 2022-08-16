#include <stdio.h>
/*
problem website
https://www.acmicpc.net/problem/1212

[Main Points]
1. Doing Octal to Binary
  Each digit of Octal calculate to Three digit of Binary

[Solution]
1. Use Integer to Binary algorithm for Each of Octal digit

2. Use two-Dimensional Array
*/
// int main()
// {
//     char octal[400000];
//     int digit, j = 0;
//     char binary[400000][3];
//     scanf("%s", octal);

//     // Process when Octal is 0
//     if (octal[0] == '0')
//     {
//         printf("0");
//         return 0;
//     }

//     for (j = 0; octal[j] != '\0'; j++)
//     {
//         // Take last digit of Octal by ascill code
//         // char 0  =  int 48
//         digit = octal[j] - '0';
//         // Save digit from front of Binary array
//         // Until digit > 0
//         for (int i = 0; digit > 0; i++)
//         {
//             // Check odd or even
//             if (digit % 2 == 0)
//                 binary[j][i] = '0';

//             else
//                 binary[j][i] = '1';
//             digit /= 2;
//         }
//     }
//     for (int k = 0; k < j; k++)
//     {
//         // Print Binary array from end to begin
//         for (int i = 2; i >= 0; i--)
//         {
//             if (binary[k][i] == NULL)
//             {
//                 // First Print should print Nothing
//                 if (k == 0)
//                     printf("");
//                 else
//                     printf("0");
//             }
//             else
//                 printf("%c", binary[k][i]);
//         }
//     }

//     return 0;
// }

int main()
{
    char octal[333335];
    int digit, i = 0, j = 0;
    char binary[1000004];
    scanf("%s", octal);

    // Process when Octal is 0
    if (octal[0] == '0')
    {
        printf("0");
        return 0;
    }

    // Take last digit of Octal char to int
    digit = octal[j] - '0';

    // check digit by bit operator
    // Firt Process need not to print '0' at front
    if (digit & 4)
        binary[i++] = '1';

    // !!  =>  specific value to Boolean
    if (digit & 2 || digit & 4)
        binary[i++] = '0' + !!(digit & 2);
    binary[i++] = '0' + (digit & 1);

    // Until octal End ++j
    while (octal[++j] != '\0')
    {
        digit = octal[j] - '0';
        binary[i++] = '0' + !!(digit & 4);
        binary[i++] = '0' + !!(digit & 2);
        binary[i++] = '0' + (digit & 1);
    }
    // Make Char arry to String
    binary[i] = '\0';
    printf("%s", binary);

    return 0;
}