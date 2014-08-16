#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
do
{    
    printf("How much change is owed?\n");
    change = GetFloat();
}
while(change < 0);

int change = (int) round(change*100)
int totalcoins = 0;

// While change 
}
