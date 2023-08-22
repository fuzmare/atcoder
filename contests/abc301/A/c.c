#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d", &N);
  char S[N];
  scanf("%s", S);
  int countT=0, countA=0;
  int setpoint=(N+1)/2;
  for (int i = 0; i < N; i++) {
    if (S[i]=='T') {
      countT++;
    } else {
      countA++;
    }
    if (countT==setpoint) {
      printf("T\n");
      break;
    }
    if (countA==setpoint) {
      printf("A\n");
      break;
    }
  }

  return 0;
}
