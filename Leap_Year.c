// 백준 알고리즘
// 문제 번호 : 2753

#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  if(a % 4 == 0) {
    if(a % 100 != 0 || a % 400 == 0) {
      printf("1");
    }else {
      printf("0");
    }
  }else {
    printf("0");
  }
  return 0;
}