// 백준 알고리즘
// 문제 번호 : 1110

#include <stdio.h>

int main(void) {
  int n, cn;
  int cy = 0;
  scanf("%d", &n);
  int cpyn = n;
  while(cn != n) {
    cn = ((cpyn % 10) * 10) + (((cpyn / 10) + (cpyn % 10)) % 10);
    cpyn = cn;
    cy++;
  }
  printf("%d", cy);
  return 0;
}