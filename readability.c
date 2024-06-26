#include <stdio.h>

int main(void)
{
    char input[500];
    int letter_counter = 0, letter_total = 0, word_counter = 0, sentence_counter = 0;
    float index = 0;

    printf("Gimme some text: ");
    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] == ' ')
        {
            word_counter++;
        }
    }

    word_counter++;

    for (int j = 0; input[j] != '\0'; j++)
    {
        if ((input[j] >= 'a' && input[j] <= 'z') || (input[j] >= 'A' && input[j] <= 'Z'))
        {
            letter_counter++;
        }
    }

    letter_total = letter_counter;

    for (int k = 0; input[k] != '\0'; k++)
    {
        if (input[k] == '.' || input[k] == '!' || input[k] == '?')
        {
            sentence_counter++;
        }
    }

    float L = (float) letter_total / word_counter * 100;
    float S = (float) sentence_counter / word_counter * 100;
    index = 0.0588 * L - 0.296 * S - 15.8;

    printf("index: %f\n", index);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", index);
    }
    return 0;
}
