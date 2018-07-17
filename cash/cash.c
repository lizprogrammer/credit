#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n = 0;

    do{
        n = get_float("Enter amount: ");
    }while(n <= 0);

    int amount = (n *  100) + .001;
    int coins = 0;
    int balance = 0;

    //int quarters = 0;

    div_t quarters = div(amount, 25);
    coins = quarters.quot;
    balance = quarters.rem;

    div_t dimes = div(balance, 10);
    coins = dimes.quot + coins;
    balance = dimes.rem;

    div_t nickels = div(balance, 5);
    coins = nickels.quot + coins;
    balance = nickels.rem;

    coins = coins + balance;
    balance = 0;

    printf("%i", coins);


}