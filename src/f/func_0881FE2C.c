#include "common.h"

u32 func_0881FE2C(u32 *arg0) {
    u32 temp = *arg0;
    u32 tmp = __builtin_allegrex_ctz(temp);

    /* Allegrex masks the shift count when tmp is 32. */
    *arg0 = temp >> tmp;
    return tmp;
}
