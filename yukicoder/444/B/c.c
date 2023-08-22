#include <stdio.h>
int binchar2int(char* S)
{
  int ans=0;
  for (int i=0; S[i]!='\0'; i++) {
    ans = ans<<1;
    if (S[i]=='1') {
      ans=ans|1;
    }
  }
  return ans;
}
int main(void)
{
  char cA[30],cB[30];
  int A,B;
  scanf("%s %s", cA, cB);
  A = binchar2int(cA);
  B = binchar2int(cB);
  printf("%d\n", A^B);
  return 0;
}
