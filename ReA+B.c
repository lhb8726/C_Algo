// 백준 알고리즘
// 문제 번호 : 10950

#include <stdio.h>

int main(void) {
  int a, b, t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++) {
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
  }
  return 0;
}