#include <stdlib.h>
#include <stdio.h>

int cb(int v[], int st, int dr, int val)
{
    int mij=(st+dr)/2;
    if (st>dr)
        return -1;
    if(v[mij]==val)
        return mij;
    else
    {
        if(val>v[mij])
            return cb(v, mij+1, dr, val);
        else
            return cb(v, st, mij-1, val);
    }
}

int main()
{
    int i, n, x, y, v[100], poz;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &v[i]);
    scanf("%d%d", &x, &y);
    if (x > y)
    {
        x += y;
        y = x - y;
        x = x - y;
    }
    poz=cb(v, v[0], v[n-1], x);
    i=poz+1;
    while(v[i]!=y)
    {
        printf("%d ", v[i]);
        i++;
    }

  return 0;
}
