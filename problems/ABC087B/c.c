#include <stdio.h>
int isometric_series(int a, int n, int d){
  return(n*(2*a+(n-1)*d)/2);
}
int count_lattice_triangle(int a){
  if (a<0) {
    return(0);
  }
  int d=-5;
  int n=(a-d-1)/(-d);
  int ans=isometric_series(a,n,d);
  printf("%d\n",ans);
  return(ans);
}
int main(void){
//  int a;
//  scanf("%d",&a);
//  count_lattice_triangle(a);
  int a,b,c,x;
  scanf("%d %d %d %d",&a,&b,&c,&x);
  int max100, max500;
  max100=x/100;
  max500=x/500;
  int p100, p50, p500;
  int outer, limitted50, limitted100, limitted500, compensation50_100, compensation100_500, compensation50_500;
  p100=(c-1)/2;
  p50=5*(max500-a);
  p500=5*((c-1)/5-a);
  outer=count_lattice_triangle(max100);
  limitted50=count_lattice_triangle(p100);
  limitted100=count_lattice_triangle(max100-b);
  limitted500=count_lattice_triangle(max500-a);
  compensation50_100=count_lattice_triangle(p100-b);
  compensation100_500=count_lattice_triangle(p50-b);
  compensation50_500=count_lattice_triangle(p500);
  printf("%d",outer-limitted50-limitted100-limitted500-compensation50_100-compensation100_500-compensation50_500);
}
