// 백준 알고리즘
// 문제 번호 : 2739

#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for(int i = 1; i < 10; i++) {
    printf("%d * %d = %d\n", n, i, n * i);
  }
  return 0;
}