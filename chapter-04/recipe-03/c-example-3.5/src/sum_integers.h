#ifndef __SUM_INTEGERS_H__
#define __SUM_INTEGERS_H__

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

 /*! \fn int sum_integers(int32_t array[], int array_len)
    \brief get sum.
 
    \param array the array to sum.
    \param array_len the array length.
*/

int sum_integers(int32_t array[], int array_len);

#ifdef __cplusplus
}
#endif

#endif
