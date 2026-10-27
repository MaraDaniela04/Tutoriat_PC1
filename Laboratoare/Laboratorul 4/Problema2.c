#include <stdio.h>
#include <stdlib.h>

struct nr {
    short byte1:8;
    short byte2:8;  //unsigned char
};

union comun {
    short m;
    struct nr n;
}a;

int main() 
{
  scanf("%d", &a.m);
  short b;
  b=a.n.byte2;
  a.n.byte2=a.n.byte1;
  a.n.byte1=b;
  printf("%d", a.m);
    
  return 0;
}
