#include <stdint.h>

#include "sum_integers.h"

int sum_integers(int32_t array[], int array_len)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < array_len; i++)
      sum += array[i];
    return sum;
}
