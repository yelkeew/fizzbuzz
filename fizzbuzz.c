#include <stdio.h>

int main (int argc, char *argv[])
{
    int i;
    int p;

    for (i = 1; i <= 100; i ++)
    {
        p = 0;
        if (0 == (i % 3))
        {
            p = 1;
            printf("fizz");
        }
        if (0 == (i % 5))
        {
            p = 1;
            printf("buzz");
        }
        if (0 == p)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
