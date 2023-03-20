#include <stdio.h>

int main(void)
{
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int *p = a;
  int count = 0;
  int *end_address = p + n;
  while (!(*p&1)) {
    *p /= 2;
    *p++;
    if (p == end_address) {
      p = a;
      count++;
    }
  }
  printf("%d", count);
}
