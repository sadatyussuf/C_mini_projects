#include <stdio.h>
#include <string.h>

int compute(const char *lhs, const char *rhs)
{
    int len_lhs = strlen(lhs);
    int len_rhs = strlen(rhs);
    int counter = 0;
    if (len_lhs != len_rhs)
    {
        return -1;
    }
    for (int i = 0; i < len_lhs; i++)
    {
        if (lhs[i] != rhs[i])
        {
            counter++;
        }
    }
    return counter;
}