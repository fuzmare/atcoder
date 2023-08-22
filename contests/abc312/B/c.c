#include <stdio.h>
int is_takcode(int N, int M, char *S, int i, int j) {
  if (N - i < 8 && M - j < 8) {
    return 0;
  } else {
    int di, dj;
    for (di = 0; di < 3; di++) {
      for (dj = 0; dj < 3; dj++) {
        if (S[(M + 1) * (i + di) + j + dj] == '#') {
          continue;
        } else {
          return 0;
        }
      }
    }
    for (di = 0, dj = 3; di < 4; di++) {
      if (S[(M + 1) * (i + di) + j + dj] == '.') {
        continue;
      } else {
        return 0;
      }
    }
    for (di = 3, dj = 0; di < 4; dj++) {
      if (S[(M + 1) * (i + di) + j + dj] == '.') {
        continue;
      } else {
        return 0;
      }
    }
  }
  return 1;
}
int main(void) {
  int N, M;
  scanf("%d %d", &N, &M);
  char S[N][M + 1];
  for (int i = 0; i < N; i++) {
    scanf("%s", S[i]);
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (is_takcode(N, M, S, i, j)) {
        printf("%d %d\n", i, j);
      }
    }
  }
  return 0;
}
