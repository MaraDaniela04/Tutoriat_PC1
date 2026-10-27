#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned a, b, s, c;
    scanf("%d", &a);
    if (a != 0)
        while(scanf("%d", &b) && b!=0)
    {
        c = a;
        s = 0;
        while(c)
        {
            a += c%10;
            c /= 10;
        }
        if (a%s==b)
            printf("%d %d \n", a, b);
        a = b;
    }
    return 0;
}
