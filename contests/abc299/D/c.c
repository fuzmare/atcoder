#include <stdio.h>
int main(void)
{
  int N;
  scanf("%d",&N);
  int p, p1=1, p2=N;
  int Sp, Sp1=0, Sp2=1;
  for (int i = 0; i < 20; i++) {
    p=(p1+p2)/2;
    printf("? %d\n",p);
    fflush(stdout);
    scanf("%d", &Sp);
    if (p-1==p1 && Sp!=Sp1) {
      printf("! %d\n",p1);
      break;
    }
    else if (p+1==p2 && Sp!=Sp2) {
      printf("! %d\n",p);
      break;
    }
    else if (Sp!=Sp1) {
      p2 = p;
    }
    else if (Sp!=Sp2) {
      p1 = p;
    }
  }

  return 0;
}
