#include <stdio.h>
int main(void)
{
  unsigned long A,B,swap;
  unsigned long c=0;
  scanf("%lu %lu", &A, &B);
  if (B>A) {
    swap=A;
    A=B;
    B=swap;
  }
  while (B!=0) {
    c+=A/B;
    A=A%B;
    swap=A;
    A=B;
    B=swap;
  }

  printf("%lu",c-1);
  return 0;
}
