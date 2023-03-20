#include <stdio.h>

int main(void)
{
  int a,b;
  scanf("%d %d", &a, &b);
  if((a & 1) & b)
    printf("Odd");
  else
    printf("Even");
}
