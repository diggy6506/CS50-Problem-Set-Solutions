#include <stdio.h>
int main(void)
{

    int input;

    printf("Enter height: ");
    scanf("%d", &input);

    while (input <= 0 || input > 8)
    { // Asks for input again if user enters less than 1 or more than 8
        printf("Invalid. Please enter number between 1 and 8.\n");
        printf("Enter Height: ");
        scanf("%d", &input);
    }

    for (int i = 1; i <= input; i++)
    { // Counter for newlines

        for (int spaces = input - i; spaces > 0; spaces--)
        { // Counter for spaces
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        { // counter for hashes
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
