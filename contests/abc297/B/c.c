#include <stdio.h>
int main(int argc, char *argv[])
{
  char S[8];
  char* RK="RKR";
  int B_count=-1;
  scanf("%s", S);
  for (size_t i = 0; i < 8; i++) {
    if (S[i]=='B') {
      if (B_count==-1) {
        B_count=i;
      }
      else if ((i&1)==(B_count&1)) {
        printf("No");
        return 0;
      }
    }
    if (S[i]=='K' || S[i]=='R') {
      if (S[i]==*RK) {
        RK++;
      }
      else {
        printf("No");
        return 0;
      }
    }
  }

  printf("Yes");
  return 0;
}
