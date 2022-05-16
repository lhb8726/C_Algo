// 백준 알고리즘
// 문제 번호 : 4344

#include <stdio.h>

int main(void) {
  int c, n;
  scanf("%d", &c);
  for(int i = 0; i < c; i++) {
    scanf("%d", &n);
    int score[n];
    int sum = 0, cnt = 0;
    float avg;
    for(int j = 0; j < n; j++) {
      scanf("%d", &score[j]);
      sum += score[j];
    }
    avg = (float)sum / n;
    for(int k = 0; k < n; k++) {
      if(avg < score[k]) {
        cnt++;
      }
    }
    printf("%.3f", (float)cnt / n);
  }
  return 0;
}