#include <stdio.h>

int main(void)
{
  int H, W;
  scanf("%d %d", &H, &W);
  int WH=W*H;
  char A[WH], B[WH];
  for (int i = 0; i < WH; i++) {
    scanf("%c", &A[i]);
  }
  for (int i = 0; i < WH; i++) {
    scanf("%c", &B[i]);
  }
  for (int i = 0; i < WH; i++) {
    for (int j = i; j < i+(WH); j++) {
      if (A[j%WH]==B[i]) {
        continue;
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
