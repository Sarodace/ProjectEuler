#include <stdio.h>

int main(void) {
  // Declare + define variables
  int i;
  int sum = 0;

  for (i = 1; i < 1000; i++){
    // Increment sum
    if (!(i % 5)) {
      sum += i;
    } else if (!(i % 3)) {
      sum += i;
    }
  }
  // Print solution
  printf("%d",sum);
}
