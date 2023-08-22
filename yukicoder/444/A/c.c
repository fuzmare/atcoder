#include <stdio.h>
int main(void)
{
  char S[3];
  scanf("%s", S);
  if (S[0]==S[1] && S[1]!=S[2]) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  return 0;
}
