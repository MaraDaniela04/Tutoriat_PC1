#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, x, P[2000]={0}, N[2000]={0}, nr;
    nr=0;
    scanf("%d%d", &n, &m);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 0)
            P[x]++;
        else
            N[abs(x)]++;
    }
    for(i = 0; i < m; i++)
    {
        scanf("%d", &x);
        if (x>=0)
        {
            if(P[x]!=0)
            nr++;
        }
        else
            if(N[abs(x)]!=0)
                nr++;
    }
    printf("%d", nr);
}
