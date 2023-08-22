#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d",&N);
  int A[N][N], B[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &A[i][j]);
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      scanf("%d", &B[i][j]);
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A[i][j]==1) {
        if (B[i][j]==0 && B[j][N+1-i]==0 && B[N+1-i][N+1-j]==0 && B[N+1-j][i]==0) {
          printf("No");
          return 0;
        }
      }
    }
  }
  printf("Yes");

  return 0;
}
