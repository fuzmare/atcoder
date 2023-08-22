#include <stdio.h>
int main(void)
{
  int N, M, P, Q, x, y, f, ans;
  scanf("%d %d %d %d", &N, &M, &P, &Q);
  for (int i = 0; i < Q; i++) {
    scanf("%d %d", &x, &f);
    ans=0;
    //(y*x)%P=f
    //(y*x-f)=P*n
    //y=(P*n+f)/x
    fprintf(stderr, "P=%d,x=%d,f=%d\n", P, x, f);
    for (y = 1; y <= M; y++) {
      fprintf(stderr, "x=%d,y=%d,x*y=%d,(x*y)modP=%d\n", x, y, x*y, (x*y)%P);
      if ((x*y)%P==f) {
        fprintf(stderr, "(x*y)modP=f\n");
        ans++;
        break;
      }
    }
    ans+=(M-y)/P;
    fprintf(stderr, "%d\n\n", ans);
    printf("%d\n", ans);
  }
  return 0;
}
