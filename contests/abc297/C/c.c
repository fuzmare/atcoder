#include <stdio.h>
int main(int argc, char *argv[])
{
  int H, W;
  scanf("%d %d", &H, &W);
  char S[W];
  for (size_t i = 0; i < H; i++) {
    scanf("%s", S);
    for (size_t i = 0; i < W; i++) {
      if (S[i]=='T' && S[i+1]=='T') {
        S[i]='P';
        S[i+1]='C';
      }
    }
    printf("%s\n", S);
  }

  return 0;
}
