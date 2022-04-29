// 백준 알고리즘
// 문제 번호 : 10952

#include <stdio.h>

int main(void) {
  int a, b;
  while(1) {
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0) {
      break;
    }
    printf("%d\n", a + b);
  }
  return 0;
}