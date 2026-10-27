#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, c, i, bit;
    scanf("%d", &x);
    printf("Valoarea binara a lui %d este ", x);
    int nrbiti=sizeof(int)*4;
    for (i=nrbiti; i>0; i--)
    {
        bit = (x >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 1)
            printf(" ");
    }
    return 0;
}
