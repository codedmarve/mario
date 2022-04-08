#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for a number
    int n;
    do
    {
        n = get_int("input a positive integer: ");
    }
    while (n < 1 || n > 8);


    //The pyramid

    //Print new lines
    for(int i = 0; i < n; i++)
    {
        //Print spaces to make hashes right align
        for(int h = n - 1; h > i; h--)
        {
            printf(" ");
        }

        //Print right aligned hashes
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //Print 2 spaces after the right aligned hashes
        printf("  ");

        //Print left aligned hashes
        for(int jj = 0; jj <= i; jj++)
        {
            printf("#");
        }
        printf("\n");
    }
}