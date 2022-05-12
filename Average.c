// 백준 알고리즘
// 문제 번호 : 1546

#include <stdio.h>

int main(void) {
  int n;
  float max = 0, avg = 0;
  scanf("%d", &n);
  float grade[n];
  for(int i = 0; i < n; i++) {
    scanf("%f", &grade[i]);
    if(max < grade[i]) {
      max = grade[i];
    }
  }
  for(int j = 0; j < n; j++) {
    avg += grade[j] / max * 100 / n;
  }
  printf("%.2f", avg);
  return 0;
}