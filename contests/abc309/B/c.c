#include <stdio.h>
int main(void) {
  int N;
  scanf("%d", &N);
  char A[N][N+1];
  for (int i = 0; i < N; i++) {
    scanf("%s", A[i]);
  }
  char tmp,n = A[0][0];
  for (int i = 1; i < N; i++) {
    tmp=A[0][i];
    A[0][i]=n;
    n=tmp;
  }
  for (int i = 1; i < N; i++) {
    tmp=A[i][N-1];
    A[i][N-1]=n;
    n=tmp;
  }
  for (int i = 1; i < N; i++) {
    tmp=A[N-1][N-1-i];
    A[N-1][N-1-i]=n;
    n=tmp;
  }
  for (int i = 1; i < N; i++) {
    tmp=A[N-1-i][0];
    A[N-1-i][0]=n;
    n=tmp;
  }
  for (int i = 0; i < N; i++) {
    printf("%s\n", A[i]);
  }
  return 0;
}
