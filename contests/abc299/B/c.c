#include <stdio.h>
int main(void)
{
  int N,T;
  scanf("%d %d", &N, &T);
  int C[N],R[N];
  for (int i = 0; i < N; i++) {
    scanf("%d", &C[i]);
  }
  for (int i = 0; i < N; i++) {
    scanf("%d", &R[i]);
  }
  int max_rule1=0, max_rule2=0;
  int winner_rule1=0, winner_rule2=0;
  for (int i = 0; i < N; i++) {
    if (C[i]==T) {
      if (R[i]>max_rule1) {
        max_rule1=R[i];
        winner_rule1=i;
      }
    }
    else if(C[i]==C[0]){
      if (R[i]>max_rule2) {
        max_rule2=R[i];
        winner_rule2=i;
      }
    }
  }
  if (max_rule1!=0) {
    printf("%d",winner_rule1+1);
  } else {
    printf("%d",winner_rule2+1);
  }

  return 0;
}
