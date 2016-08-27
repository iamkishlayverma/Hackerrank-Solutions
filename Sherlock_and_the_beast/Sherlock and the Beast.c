#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    unsigned int T,i,j, N, x, y;

    scanf("%u", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%u", &N);
        switch (N % 3)
        {
        case 0:
            x = N / 3;
            y = 0;
            break;
        case 1:
            if (N < 10)
            {
                printf("-1\n");
                continue;
            }
            x = (N - 10) / 3;
            y = 2;
            break;
        case 2:
            if (N < 5)
            {
                printf("-1\n");
                continue;
            }
            x = (N - 5) / 3;
            y = 1;
            break;
        }
        for (j = 0; j < 3 * x; j++)
        {
            printf("5");
        }
        for (j = 0; j < 5 * y; j++)
        {
            printf("3");
        }
        printf("\n");
    }
    return 0;
}
