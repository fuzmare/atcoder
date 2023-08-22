#include <stdio.h>
#include <string.h>

int main(void) {
  char S[4];
  scanf("%s", S);
  if (strcmp(S, "ACE") == 0 || strcmp(S, "BDF") == 0 || strcmp(S, "CEG") == 0 || strcmp(S, "DFA") == 0 || strcmp(S, "EGB") == 0 || strcmp(S, "FAC") == 0 || strcmp(S, "GBD") == 0) {
    printf("Yes\n");
    return 0;
  }
  printf("No\n");

  return 0;
}
