// 백준 알고리즘
// 문제 번호 : 2884

#include <stdio.h>

int main(void) {
  int h, m;
  scanf("%d %d", &h, &m);
  if(h == 0) {
    if(m < 45) {
      printf("%d %d", h + 23, m + 15);
    }else {
      printf("%d %d", h, m - 45);
    }
  }else {
    if(m < 45) {
      printf("%d %d", h - 1, m + 15);
    }else {
      printf("%d %d", h, m - 45);
    }
  }
  return 0;
}