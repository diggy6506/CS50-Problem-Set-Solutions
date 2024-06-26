#include <stdio.h>

int main(void)
{
    // Declare variables
    int quarters, dimes, nickels, pennies, change_total, total_coins;

    // Coin values
    int quarter_value = 25;
    int dime_value = 10;
    int nickel_value = 5;
    int penny_value = 1;

    // Prompt user for input

    printf("Enter amount of change you need from me: ");
    scanf("%d", &change_total);

    while (change_total <= 0)
    {
        printf("Enter amount of change you need from me: ");
        scanf("%d", &change_total);
    }

    // Calculate the number of quarters
    quarters = change_total / quarter_value;
    change_total -= quarters * quarter_value;

    // Calculate the number of dimes
    dimes = change_total / dime_value;
    change_total -= dimes * dime_value;

    // Calculate the number of nickels
    nickels = change_total / nickel_value;
    change_total -= nickels * nickel_value;

    // Calculate the number of pennies
    pennies = change_total / penny_value;

    // Calculate and print total coins

    total_coins = quarters + dimes + nickels + pennies;

    printf("%d\n", total_coins);

    return 0;
}
