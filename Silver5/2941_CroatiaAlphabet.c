#include <stdio.h>

/*
problem website
https://www.acmicpc.net/problem/2941

[Main Points]
1. Create croatia array to save alphabets

2. Check there is Croatia

[Solution]
1. Check there is '=', '-', 'j'

2. If that was croatia alphabets, word--

*/

int main()
{
    char croatia[101];
    int word = 0, i = 0;

    scanf("%s", croatia);

    for (int i = 0; croatia[i] != '\0'; i++)
    {
        word++;
        switch (croatia[i])
        {
        case '=':
            word--;
            // To prevent out of access range of an array
            if (i > 1)
                // If word is 'zd=' ->  three words  ->  -2 words
                if (croatia[i - 1] == 'z' && croatia[i - 2] == 'd')
                    word--;
            break;

        case '-':
            word--;
            break;

        case 'j':
            // To prevent out of access range of an array
            if (i > 0)
                if (croatia[i - 1] == 'l' || croatia[i - 1] == 'n')
                    word--;
            break;
        }
    }

    printf("%d", word);

    return 0;
}