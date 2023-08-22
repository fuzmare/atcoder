#include <stdio.h>
int main(void)
{
  int A, B;
  scanf("%d %d", &A, &B);
  if (B==A+1) {
    if (!(A==3||A==6)) {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");

  return 0;
}
