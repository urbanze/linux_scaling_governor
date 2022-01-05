#include <stdio.h>

int isPrime(int x)
{
    if (x < 2)
    {
        return 0;
    }


    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    int counter = 0;

    for (int i = 1; i < 20000; i++)
    {
        if (isPrime(i) == 1)
        {
            counter++;
        }
    }

    printf("\nTotal: %d\n", counter);
}
