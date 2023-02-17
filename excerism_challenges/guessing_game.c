#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

int main()
{
    // Generate a random number between 0 and 20
    srand(time(0));
    int computer_choice = (rand() % 20) + 1;

    int your_number;

    printf("%d\n", computer_choice);
    while (your_number != computer_choice)
    {
        printf("Enter your number \t");
        scanf("%d", &your_number);
        if (your_number > computer_choice)
        {
            printf("Too High\n");
        }
        if (your_number < computer_choice)
        {
            printf("Too Low\n");
        }
    }
    printf("You got it!, Well done!!");

    return 0;
}