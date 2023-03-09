#include <stdio.h>
#include <cs50.h>

int get_size(void);
void printBlock(int size);

int main(void)
{
    int n = get_size();

    printBlock(n);
}

int get_size(void)
{
    int n;
    do
    {
        n =  get_int("Change: ");
    }
    while (n < 0);
    return n;
}

void printBlock(int size)
{
    //prints n rows
    for (int i = 0; i < size; i++)
    {
        //prints full stops
        //j is size-1., for each time j is greater then i, decrement j by 1
        for (int j = size - 1; j > i; j--)
        {
            printf(".");
        }

        //print # 
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }

        printf("  ");

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

