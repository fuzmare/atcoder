#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  char S[N];
  scanf("%s",S);
  char f[3]="|*|";
  int c=0;
  for (int i = 0; i < N; i++) {
    if (S[i]=='.') {
      continue;
    }
    else if (S[i]==f[c]) {
      if (c < 2) {
        c++;
      }
      else {
        printf("in");
        return 0;
      }
    }
    else {
    printf("out");
    return 0;
    }
  }

  return 0;
}
