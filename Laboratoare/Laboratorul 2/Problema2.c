#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n, mask, bitn, setn, deln, cn;
    scanf("%d%d", &x, &n);

    //bitul n din x
    bitn = (x >> n-1) & 1;
    printf("%d \n", bitn);

    //nr x in care se seteaza bitul n
    mask = 1<<n-1;
    setn = x|mask
    printf("%d \n", mask);

    //nr x in care se sterge bitul n
    deln = x&(~mask);
    printf("%d \n", mask);

    //nr x in care se complementeaza bitul n
    cn = x^mask;
    printf("%d", cn));

    return 0;
}
