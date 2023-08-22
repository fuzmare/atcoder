#include <stdio.h>

int main(void)
{
  int N,A,B,c;
  scanf("%d %d %d",&N, &A, &B);
  A+=B;
  for (int i = 1; i <= N; i++) {
    scanf("%d", &c);
    if (c==A) {
      printf("%d\n",i);
      break;
    }
  }

  return 0;
}
