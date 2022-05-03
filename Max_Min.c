// 백준 알고리즘
// 문제 번호 : 10817

#include <stdio.h>

int main(void) {
  int n, max, min;
  int i = 0;
  scanf("%d", &n);
  int a[n];
  while(i < n) {
    scanf("%d", &a[i]);
    max = min = a[0];
    if(max < a[i]) {
      max = a[i];
    }
    if(min > a[i]) {
      min = a[i];
    }
    i++;
  }
  printf("%d %d", min, max);
  return 0;
}