#include <stdio.h>
int main(int argc, char *argv[])
{
  int t=-1;
  int N, D;
  scanf("%d %d", &N ,&D);
  int T1, T2;
  scanf("%d", &T1);
  for (size_t i = 0; i < N-1; i++) {
    scanf("%d", &T2);
    if (T2-T1<=D) {
      t=T2;
      break;
    }
    else {
      T1=T2;
    }
  }
  printf("%d", t);
  return 0;
}
