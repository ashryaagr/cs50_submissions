#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while ((height < 1)||(height > 8));

    for(int i = 1; i <= height; i++)// i denotes line number
    {
        for(int j = 0; j < (height-i); j++)
        {
            printf(" ");  // gives necessary number of spaces before printing
        }

        for(int j = 0; j < i; j++)
        {
            printf("#");  // prints i number of hashes(#)
        }

        printf("  "); // prints the 2 spaces in the middle

        for(int j = 0; j < i; j++)
        {
            printf("#"); // prints i number of hashes again
        }

        printf("\n");
    }
}
