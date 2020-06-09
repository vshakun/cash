// Use greedy-algorithm to return amount of coins of change owned
#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Prompt user for a positive float

int main(void)
{
    float change_owned;
    do
    {
        change_owned = get_float("Change Owned: ");
    }
    while (change_owned <= 0);

    // Round cents to the nearest penny

    int cents = round(change_owned * 100);

    int total_coins = 0;

    // Count quarters
    int quarter_count = cents / 25;
    total_coins += quarter_count;
    cents %= 25;

    // Count dimes
    int dimes_count = cents / 10;
    total_coins += dimes_count;
    cents %= 10;

    // Count nickels
    int nickels_count = cents / 5;
    total_coins += nickels_count;
    cents %= 5;

    // Count pennies
    int pennies_count = cents / 1;
    total_coins += pennies_count;
    cents %= 1;

    // Print the amount of coins
    printf("%i\n", total_coins);
}

