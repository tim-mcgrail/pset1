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
    	if (c - 128 >= 0){
            printf("1");
            c = c-128;}
        else
            printf("0");
        if (c - 64 >= 0){
            printf("1");
            c = c-64;}
        else
            printf("0");
        if (c - 32 >= 0){
            printf("1");
            c = c-32;}
        else
            printf("0");
        if (c - 16 >= 0){
            printf("1");
            c = c-16;}
        else
            printf("0");
        if (c - 8 >= 0){
            printf("1");
            c = c-8;}
        else
            printf("0");
        if (c - 4 >= 0){
            printf("1");
            c = c-4;}
        else
            printf("0");
        if (c - 2 >= 0){
            printf("1");
            c = c-2;}
        else
         printf("0");
        if (c - 1 >= 0){
            printf("1\n");
            c = c-1;}
        else
            printf("0\n");

}
