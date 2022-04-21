// 백준 알고리즘
// 문제 번호 : 8393

#include <stdio.h>

int main(void) {
  int n;
  int sum = 0;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    sum += i;
  }
  printf("%d", sum);
  return 0;
}