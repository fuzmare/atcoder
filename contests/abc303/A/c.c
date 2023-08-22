#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  char S[N], T[N];
  scanf("%s %s", S, T);
  for (int i = 0; i < N; i++) {
    if (!((S[i]==T[i]) || (S[i]=='l' && T[i]=='1') || (S[i]=='1' && T[i]=='l') || (S[i]=='0' && T[i]=='o') || (S[i]=='o' && T[i]=='0'))) {
      printf("No\n");
      return 0;
    }
  }

  printf("Yes\n");
  return 0;
}
