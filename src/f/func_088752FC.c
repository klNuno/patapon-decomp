#include "common.h"

typedef struct T T;

T *func_08870514(T *arg0, s16 arg1);

T *func_088752FC(void *arg0, s16 arg1) {
    return func_08870514((T *)((u8 *)arg0 - 0x30), arg1);
}
