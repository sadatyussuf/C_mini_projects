#include <stdio.h>

void sortArray(int digits[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (digits[j] > digits[j + 1])
            {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
            // printf("%d ", digits[j]);
        }
    }
}

void printArray(int digits[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", digits[i]);
    }
}

int main()
{
    int digits[] = {3, 8, 5, 1, 6, 2, 7, 9, 4};
    int size = sizeof(digits) / sizeof(digits[0]);

    sortArray(digits, size);
    printArray(digits, size);

    return 0;
}