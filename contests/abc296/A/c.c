#include <stdio.h>
int main(void){
  int N;
  scanf("%d", &N);
  char s[N];
  scanf("%s", s);
  for (int i = 0; i < N-1; i++) {
    if (s[i]==s[i+1]) {
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}
