#include <stdio.h>
#include <math.h>

/*
problem website
https://www.acmicpc.net/problem/1316

[Main Points]
1. Create an array of size 26 to store the number of alphabets

2. When the array encounters an alphabet,
  the array replaces the value with 1

3. If the value was 1,
  check if the alphabet is the same as the previous one

4. If alphabet is the same,
  switch the array value to 1,
  otherwise switch it to 0

5. Print number of group

[Solution]
1. same as Main Points

*/

int main()
{
    int num, group;
    char word[101];

    scanf("%d", &num);

    // Assume All words are group words
    group = num;

    // Loop as num value
    while (num--)
    {
        // Every Loop, initalize the array
        int alphabet[26] = {0};

        scanf("%s", word);

        // Loop until the end of the word
        for (int i = 0; word[i] != '\0'; i++)
        {
            // If it is the First Alphabet of this word
            if (alphabet[word[i] - 'a'] == 0)
            {
                alphabet[word[i] - 'a'] = 1;
            }
            // If it is the Multiple Alphabet of this word
            else if (alphabet[word[i] - 'a'] == 1)
            {
                // Continuous
                if (word[i - 1] == word[i])
                    alphabet[word[i] - 'a'] = 1;
                // Not Continuous
                else
                {
                    alphabet[word[i] - 'a'] = -1;
                    // This word is not Group word
                    // So, decrease number of group
                    group--;
                    break;
                }
            }
        }
    }

    printf("%d", group);

    return 0;
}