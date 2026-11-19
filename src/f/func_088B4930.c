#include "common.h"

typedef struct T088B3A8C T088B3A8C;

T088B3A8C *func_088B3A8C(T088B3A8C *arg0, s16 arg1);

T088B3A8C *func_088B4930(u8 *arg0, s16 arg1) {
    return func_088B3A8C((T088B3A8C *)(arg0 - 0x60), arg1);
}
