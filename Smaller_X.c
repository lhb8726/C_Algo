// 백준 알고리즘
// 문제 번호 : 10871

#include <stdio.h>

int main(void) {
  int n, x;
  int a[100];
  scanf("%d %d", &n, &x);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for(int j = 0; j < n; j++) {
    if(a[j] < x) {
      printf("%d ", a[j]);
    }
  }
  return 0;
}