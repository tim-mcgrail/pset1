/**
* mario.c
*
* CS50x
* Tim McGrail
*
* Creates a half pyramid. Height depends on user input. 
*
*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{  int h;
do
{
    printf("Height: ");
    h = GetInt();
}
while (h < 0 || h > 23);
    // The program will continually prompt the user for a height until they enter a number between 0 and 23.

for (int i = 0; i < h; i++)
    // Declaring i = 0 is saying to start at row 1. As i increases, the row number increases by 1 as well. 
{
    for (int s = (h-i-1); s > 0; s--)
        // Declaring s for spaces. S will be equal to height minus i minus 1. Ex. User inputs
        // 7, then s= 7-(i)-1. 
    {
        printf(" ");
    } 
    for (int b = (i+2); b > 0; b--)
    // b will start at 2 since the first row will always have 2 hashtags. 
    {
        printf("#");
    }
    printf("\n");
}
}
