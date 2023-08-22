#include <stdio.h>
int main(void) {
  int N, P, Q;
  scanf("%d %d %d", &N, &P, &Q);
  int Dmin, Di;
  scanf("%d", &Dmin);
  for (int i = 1; i < N; i++) {
    scanf("%d", &Di);
    if (Di < Dmin) {
      Dmin = Di;
    }
  }
  printf("%d\n", P < Dmin+Q ? P : Dmin+Q);
  return 0;
}
