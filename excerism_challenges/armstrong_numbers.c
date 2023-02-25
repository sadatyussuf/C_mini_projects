#include <stdio.h>
#include <math.h>

bool is_armstrong_number(int num) {
    int sum = num;
    int len = floor(log10(num) + 1);
    int temp;
    while (num)
    {
        temp = num % 10;
        sum -= pow(temp, len);
        num /= 10;
    }
    return sum == 0;
}