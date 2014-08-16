#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int hash_function(char* key, int size)
{
    // sum ascii values
    int sum = 0;
	for (int i = 0, n = strlen(key); i < n; i++)
    {
  		sum = key[i] + sum;
    }
    
    // mod by size to stay w/in bound of table
    return sum % size;
}

int main(int argc, char* argv[])
{
    // get hash table size
    printf("Hash table size: ");
    int size = GetInt();

    // get key
    printf("Key: ");
    char* key = GetString();

    // calculate and print index
    printf("The string '%s' is mapped to index %i\n", key, hash_function(key, size));

    return 0;
}
