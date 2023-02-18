#include <stdio.h>
#include <math.h>
#include <stdint.h>

uint64_t square(uint8_t index)
{
    if (index == 0 || index > 64)
    {
        return 0;
    }
    return pow(2, index);
}
//
uint64_t total(void)
{
    uint64_t results = 0;
    for (int i = 0; i < 64; i++)
    {

        results += square(4);
        printf("%d\n", results);
    }
    return results;
}

int main()
{
    total();
    return 0;
}