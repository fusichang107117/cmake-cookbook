#include <stdio.h>

#include "sum_integers.h"

// we assume all arguments are integers and we sum them up
// for simplicity we do not verify the type of arguments
int main(int argc, char *argv[]) {

  int32_t array[5] = {1,2,3,4,5};
  int32_t sum = sum_integers(array, 5);

  printf("sum: %d\n", sum);
  return 0;
}
