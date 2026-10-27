#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned m, n, i, j, a[100][100], t[100][100];
    scanf("%d%d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            t[i][j] = a[j][i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}
