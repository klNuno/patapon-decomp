#include "common.h"

u32 func_088146E4(u32);
extern s32 (*D_08AD27D4[])(s32);

void func_088A32FC(s32 (*arg0)(s32)) {
    if (arg0 == NULL) {
        D_08AD27D4[0] = (s32 (*)(s32))func_088146E4;
    } else {
        D_08AD27D4[0] = arg0;
    }
}
