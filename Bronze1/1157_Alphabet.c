#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/1157

[Main Points]
1. Create an Array to store the number of alphabets

2. Convert Uppercase letters to lowwercase letters

3. Print the maximum value after checking the number of alphabets

4. A = a + 32

[Solution]
1. Same as Main Points

*/
int main()
{
    int alphabet[26] = {
        0,
    };
    int max = -1;
    char result;
    char word[1000001];
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        // Uppercase
        if ('A' <= word[i] && word[i] <= 'Z')
            alphabet[word[i] - 'A']++;
        // Lowercase
        else
            alphabet[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max < alphabet[i])
        {
            max = alphabet[i];
            result = 'A' + i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        // If there is another Max value
        if (i != result - 'A' && alphabet[i] == max)
        {
            result = '?';
            break;
        }
    }

    printf("%c", result);

    return 0;
}