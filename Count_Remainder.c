// 백준 알고리즘
// 문제 번호 : 3052

#include <stdio.h>

int main(void) {
  int arr[10];
  int dcnt = 0;
  for(int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
    arr[i] %= 42;
  }
  for(int j = 0; j < 10; j++) {
    int scnt = 0;
    for(int k = j + 1; k < 10; k++) {
      if(arr[j] == arr[k]) {
        scnt++;
      }
    }
    if(scnt == 0) {
      dcnt++;
    }
  }
  printf("%d", dcnt);
  return 0;
}