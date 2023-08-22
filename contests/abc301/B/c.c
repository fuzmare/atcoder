#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  int A[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }
  int n=A[0];
  printf("%d ", n);
  for (int i = 1; i < N; i++) {
    if (A[i]-n==1 || A[i]-n==-1) {
      n=A[i];
      printf("%d ", A[i]);
      continue;
    }
    if (A[i]-n>0) {
      for (n++; n < A[i]; n++) {
        printf("%d ", n);
      }
    }
    else if (A[i]-n<0) {
      for (n--; n > A[i]; n--) {
        printf("%d ", n);
      }
    }
    n=A[i];
    printf("%d ", A[i]);
  }
  return 0;
}
