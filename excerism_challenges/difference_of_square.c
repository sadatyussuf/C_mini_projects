#include <stdlib.h>
#include <stdio.h>
#include <math.h>
unsigned int square_of_sum(unsigned int number)
{
    int sum = 0;
    int square;
    for (unsigned int i = 0; i <= number; i++)
    {
        sum += i;
    }
    square = pow(sum, 2);
    return square;
}
unsigned int sum_of_squares(unsigned int number)
{
    int sum = 0;
    for (unsigned int i = 0; i <= number; i++)
    {
        sum += pow(i, 2);
    }
    return sum;
}
unsigned int difference_of_squares(unsigned int number)
{
    int difference = square_of_sum(number) - sum_of_squares(number);
    return difference;
}