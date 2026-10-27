#include <stdio.h>
#include <stdlib.h> 

int main()
{
    unsigned p, i, j, k;
    scanf("%d", &p);
    for (i = 1; i < p; i++)
        for (j = i; j < p - i; j++)
        {
            k = p - i - j;
            if (k != i && j <= k)
                if (i + j > k && i + k > j && j + k > i)
                    printf("(%d, %d, %d) \n", i, j, k);
        }
    }
}
