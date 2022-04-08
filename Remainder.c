// 백준 알고리즘
// 문제 번호 : 10430

#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%d\n", (a + b) % c);
  printf("%d\n", ((a % c) + (b % c)) %c);
  printf("%d\n", (a * b) % c);
  printf("%d", ((a % c) * (b % c)) %c);
  return 0;
}