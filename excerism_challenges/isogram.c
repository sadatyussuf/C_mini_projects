#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_isogram(const char phrase[])
{
    if (phrase == NULL)
    {
        return false;
    }

    printf("%s\n", phrase);
    for (int i = 0; i < strlen(phrase); i++)
    {
        for (int j = i + 1; j < strlen(phrase); j++)
        {
            if (isalnum(phrase[i]) && isalnum(phrase[j]))
            {

                char convert_i_lc = tolower(phrase[i]);
                char convert_j_lc = tolower(phrase[j]);
                // if (phrase[i] == phrase[j])
                if (convert_i_lc == convert_j_lc)
                {
                    printf("Duplicate of %c Found\n", convert_j_lc);
                    return false;
                }
            }
        }
    }
    printf("Duplicate not Found\n");
    return true;
}

int main()
{
    is_isogram("six-year-old");

    return 0;
}