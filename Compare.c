// 백준 알고리즘
// 문제 번호 : 1330

#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  if(a > b) {
    printf(">");
  }else if(a == b) {
    printf("==");
  }else {
    printf("<");
  }
  return 0;
}