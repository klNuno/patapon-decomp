#include "common.h"

u32 func_088AD870(volatile u16 *arg0) {
    u32 result = 0;

    if (*arg0 != 0) {
        do {
            if (*arg0 == '/') return result;
            ++result;
            ++arg0;
            if (result >= 0x180U) return 0;
        } while (*arg0 != 0);
    }
    return result;
}
