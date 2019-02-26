#include <stdio.h>

int main(void) {
  int i;
  int sum;
  sum = 0;
  for (i = 1;i<1000;i++){
    if (i % 5 == 0){
      sum = sum + i;
    } else if (i % 3 == 0){
      sum = sum + i;
    }
  }
  printf("%d",sum);
  return 0;
}