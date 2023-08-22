#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  char S[N];
  scanf("%s", S);
  _Bool good=0;
  for (int i = 0; i < N; i++) {
    if (S[i]=='x') {
      printf("No");
      return 0;
    }
    if (S[i]=='o'){
      good = 1;
    }
  }
  if (good == 1) {
    printf("Yes");
  }
  else {
    printf("No");
  }

  return 0;
}
