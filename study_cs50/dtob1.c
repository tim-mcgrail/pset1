#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{

	printf("Please enter a positive decimal value: ");
    int c = GetInt();
    
    if (c <= 0)
    {
        printf("WE ASKED FOR A POSITIVE DECIMAL VALUE!");
        return 1;
    }
    
    // turn decimal into binary 
    while (c > 0)
    {
        for(int i = 256; i >= 1; i++)
        {
            if (c - i >= 0)
            {
                printf("1");
                c = c-i;
            }
            else
                printf("0");
            i = i/2;
            i--;
        }
        printf("\n");
    }      
}
