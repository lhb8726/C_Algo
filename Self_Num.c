#include <stdio.h>

void self_num() {
  int num[10001] = { 0 };
  int nsn = 0;
  int s = 0;
  while(1) {
    if(s < 10) {
      nsn = s + s;
      num[nsn] = 1;
      s++;
    }
    else if(s < 100) {
      nsn = s + (s / 10) + (s % 10);
      num[nsn] = 1;
      s++;
    }
    else if(s < 1000) {
      nsn = s + (s / 100) + ((s % 100) / 10) + ((s % 100) % 10);
      num[nsn] = 1;
      s++;
    }
    else if(s < 10000) {
      nsn = s + (s / 1000) + ((s % 1000) / 100) + (((s % 1000) % 100) / 10) + (((s % 1000) % 100) % 10);
      if(nsn <= 10000) {
       num[nsn] = 1; 
      }
      s++;
    }
    else if(s == 10000) {
      break;
    }
  }
      for(int i = 0; i <= s; i++) {
      if(num[i] != 1) {
        printf("%d\n", i);
      }
    }
}
  
int main(void) {
  self_num();
  return 0;
}