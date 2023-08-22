#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  char S[N];
  scanf("%s", S);
  int L_max=-1, left=-1, right=-1;
  for (int i = 0; i <= N; i++) {
    if (right==i-1) {
      if (S[i]=='o') {
        left=i;
      }
      else {
        right=i;
      }
    }
    else {
      if (S[i]=='o') {
      }
      else if (S[i]=='-' || S[0]=='-') {
        right=i;
        int L = right-left;
        if (L>L_max && L!=0) {
          L_max=L;
        }
      }
    }
  }

  printf("%d",L_max);
  return 0;
}
