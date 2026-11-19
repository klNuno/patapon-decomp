#include "common.h"

extern u32 D_08A49610[];

u32 func_0880C7B8(volatile u32 *arg0) {
    if (*arg0 == 0) {
        u32 temp = D_08A49610[0] + 1;
        D_08A49610[0] = temp;
        *arg0 = temp;
    }
    return *arg0;
}
