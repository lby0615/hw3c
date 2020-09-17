#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>
#include <math.h>

int digit_sum(int n) {
  if (n == 0){
    return n;
  }
  else{
    return n%10+digit_sum(n/10);
  }
}


int main(void) {
  int x = atoi(readline("Enter an int: "));
  printf("sum of digits of %d is %d.\n",x, digit_sum(x));
  return 0;
}