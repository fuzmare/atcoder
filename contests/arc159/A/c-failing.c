#include <stdio.h>
int trace(int N, _Bool* A, int i, int target, int depth)
{
  int result;
  int best;
  for (int j = 0; j < N; j++) {
    printf("%d,%d,%d\n",i+1,j+1,A[i+N*j]);
    if (j==i) {
      continue;
    }
    if (A[i][j]==1) {
      if (j==target) {
        result = depth;
      }
      else {
        result = trace(N, A, j, target, depth+1);
      }
    }
    else {
      result = -1;
    }
    if (best==-1) {
      if (result!=-1) {
        best = result;
      }
    }
    else if (result < best) {
      best = result;
    }
  }
  return best;
}
int main(void)
{
  int N,K;
  scanf("%d %d", &N, &K);
  _Bool A[N][N];
  for (int i=0; i<N*N; i++) {
    scanf("%d", A[i]);
  }
  int Q;
  scanf("%d", &Q);
  int s,t;
  int route[N];
  for (int i=0; i < Q; i++) {
    scanf("%d %d", &s, &t);
  }
}
