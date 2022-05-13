// 백준 알고리즘
// 문제 번호 : 8958

#include <stdio.h>
#include <string.h>

int main(void) {
  int n, cnt, sum;
  scanf("%d", &n);
  char ox[80];
  for(int i = 0; i < n; i++) {
    cnt = 0;
    sum = 0;
    scanf("%s", ox);
    for(int j = 0; j < strlen(ox); j++) {
      if(ox[j] == 'O'){
        cnt++;
        sum += cnt;
      }else if(ox[j] == 'X') {
        cnt = 0;
      }
    }
    printf("%d\n", sum);
  }
  return 0;
}