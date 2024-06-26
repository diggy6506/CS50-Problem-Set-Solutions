#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Check for correct number of command-line arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Validate the key argument
    char *key_str = argv[1];
    for (int i = 0; key_str[i] != '\0'; i++)
    {
        if (!isdigit(key_str[i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert key to an integer
    int k = atoi(key_str);

    // Check if the key is non-negative
    if (k < 0)
    {
        printf("Error: The key must be a non-negative integer.\n");
        return 1;
    }

    // Get input text from user
    char plaintext[200];
    printf("Enter text to encrypt: ");
    fgets(plaintext, sizeof(plaintext), stdin);

    // Encrypt plaintext using Caesar cipher
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        if (isalpha(plaintext[i]))
        {
            char base = islower(plaintext[i]) ? 'a' : 'A';
            plaintext[i] = base + (plaintext[i] - base + k) % 26;
        }
    }

    // Print encrypted ciphertext
    printf("ciphertext: %s", plaintext);

    return 0;
}
