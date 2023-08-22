#include <stdio.h>
#define RED "\e[0;31m"
#define NC "\e[0m"
int portion(int N, int *a, int *b, int p) {
  int sum = 0;
  for (int i = 0; i < N; i++) {
    if (a[i] >= p) {
      sum += b[i];
    }
  }
  return sum;
}
int main(void) {
  int N, K;
  scanf("%d %d", &N, &K);
  int a[N], b[N], l = 0, r = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &a[i], &b[i]);
    if (a[i] > r)
      r = a[i];
  }
  int m = 0;
  r++;
  for (int i = 1; i <= r && i < 10; i++) {
    fprintf(stderr, RED "%d\n" NC, portion(N, a, b, i));
  }
  fprintf(stderr, "days=%d\n", r);
  while (r - l > 1) {
    m = (l + r) / 2;
    fprintf(stderr, "l=%d, r=%d, mid=%d, sum=%d, K=%d, %s\n", l, r, m,
            portion(N, a, b, m), K,
            portion(N, a, b, m) <= K ? "smaller" : "larger");
    if (portion(N, a, b, m) <= K) {
      r = m;
    } else {
      l = m;
    }
  }
  printf("%d\n", m + 1);

  return 0;
}
