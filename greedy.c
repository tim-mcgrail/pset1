/**
* greedy.c
*
* CS50x
* Tim McGrail
*
* Gives the lowest amount of coins possible. Change needed depends on user input.
*
*/

#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{   
    float getchange;
    
    do
    {
        printf("Change Needed:\n");
        getchange = GetFloat();
    }
    while (getchange < 0);

    int change = (int) round(getchange*100);    
    int coins = 0;
    
    while (change >= 25)
    {
        coins++;
        change = change - 25;
    }
    
    while (change >= 10)
    {
        coins++;
        change = change - 10;
    }
    
    while (change >= 5)
    {
        coins++;
        change = change - 5;
    }
    
    while (change >= 1)
    {
        coins++;
        change = change - 1;
    }
    
    printf("%d\n", coins);
}
