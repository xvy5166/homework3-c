// Author: Xinyi Yang xvy5166@psu.edu



#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int digit_sum(int n){
  if( n == 0){
    return 0;
  }
  else{
    return n%10 + digit_sum(n/10);
  }
}

int main(void) {
  char *s = readline("Enter an int: ");
  int i = atof(s);
  int digit_s = digit_sum(i);
  printf("Sum of digits of %s is %d.\n", s, digit_s);
  return 0;
}