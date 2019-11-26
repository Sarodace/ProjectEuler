#include <stdio.h>

int main(void) {
  // Declare & define variables
  int num1 = 1;
  int num2 = 2;
  int sum = 0;

  while (num1 < 4000000) {
    // Print 1st number and 2nd number
    printf("%d, %d\n",num1,num2);

    // Increment sum
    if (!(num1 % 2))
      sum += num1;
    if (!(num2 % 2))
      sum += num2;
    
    // Update values
    num1 += num2;
    num2 += num1;

    // Print current sum
    printf("Sum: %d \n",sum);
  }
}
