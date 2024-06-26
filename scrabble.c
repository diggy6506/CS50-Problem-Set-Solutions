#include <ctype.h>
#include <stdio.h>

// Takes a character and returns Scrabble value
int get_letter_value(char ch)
{
    // Convert the character to lowercase
    switch (tolower(ch))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'l':
        case 'n':
        case 'o':
        case 'r':
        case 's':
        case 't':
        case 'u':
            return 1;
        case 'd':
        case 'g':
            return 2;
        case 'b':
        case 'c':
        case 'm':
        case 'p':
            return 3;
        case 'f':
        case 'h':
        case 'v':
        case 'w':
        case 'y':
            return 4;
        case 'k':
            return 5;
        case 'j':
        case 'x':
            return 8;
        case 'q':
        case 'z':
            return 10;
        default:
            return 0; // Return 0 for any non-alphabetic character (although they should be filtered
                      // out before this)
    }
}

int main(void)
{
    char word_one[50], word_two[50];
    int sum_1 = 0, sum_2 = 0;

    printf("Player 1: ");
    scanf("%s", word_one);

    printf("Player 2: ");
    scanf("%s", word_two);

    // Calculate the score for Player 1's word
    for (int i = 0; i < 50 && word_one[i] != '\0'; i++)
    {
        if (isalpha(word_one[i]))
        {                                           // Check if the character is a letter
            sum_1 += get_letter_value(word_one[i]); // Add the letter's value to the total score
        }
    }

    // Calculate the score for Player 2's word
    for (int k = 0; k < 50 && word_two[k] != '\0'; k++)
    {
        if (isalpha(word_two[k]))
        {                                           // Check if the character is a letter
            sum_2 += get_letter_value(word_two[k]); // Add the letter's value to the total score
        }
    }

    // Check who won and print the result
    if (sum_1 > sum_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (sum_2 > sum_1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }

    return 0;
}
