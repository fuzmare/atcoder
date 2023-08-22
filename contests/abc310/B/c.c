#include <stdio.h>
unsigned long long lldpow(unsigned long long a, unsigned int b) {
  unsigned long long res = 1;
  for (unsigned int i = 0; i < b; i++) {
    res *= a;
  }
  return res;
}
int main(void) {
  unsigned int N, M;
  scanf("%d %d", &N, &M);
  unsigned int P[N], C, F;
  unsigned long long F1[N], F2[N];
  for (unsigned int i = 0; i < N; i++) {
    scanf("%d %d", &P[i], &C);
    F1[i] = 0;
    F2[i] = 0;
    for (unsigned int ii = 0; ii < C; ii++) {
      scanf("%d", &F);
      if (F <= 65) {
        F1[i] += lldpow(2, F - 1);
      } else {
        F2[i] += lldpow(2, F - 65);
      }
    }
  }
  for (unsigned int i = 0; i < N; i++) {
    for (unsigned int ii = 0; ii < N; ii++) {
      if (P[i] <= P[ii] && ((F1[i] ^ F1[ii]) & F1[ii]) == 0 &&
          ((F2[i] ^ F2[ii]) & F2[ii]) == 0) {
        if (P[i]==P[ii] && F1[i]==F1[ii] && F2[i]==F2[ii]) {
          continue;
        }
        printf("Yes\n");
        fprintf(stderr, "i=%d ii=%d\n", i, ii);
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}
