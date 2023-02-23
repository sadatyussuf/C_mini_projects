#include <stdlib.h>
#include <stdio.h>

typedef enum
{
    Black = 0,
    Brown = 1,
    Red = 2,
    Orange = 3,
    Yellow = 4,
    Green = 5,
    Blue = 6,
    Violet = 7,
    Grey = 8,
    White = 9,
} resistor_band_t;

void test_case(resistor_band_t color)
{
    printf("%d", color);
}

int main()
{
    // printf("%d", Black);
    test_case(White);

    return 0;
}