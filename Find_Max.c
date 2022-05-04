// 백준 알고리즘
// 문제 번호 : 2562

#include <stdio.h>

int main(void) {
  int a[9], cnt;
  int max = 0;
  for(int i = 0; i < 9; i++) {
    scanf("%d", &a[i]);
      if(max < a[i]) {
      max = a[i];
      cnt = i + 1;
    }
  }
  printf("%d\n", max);
  printf("%d", cnt);
  return 0;
}