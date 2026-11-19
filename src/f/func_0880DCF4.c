#include "common.h"
typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} T0;

T0 *func_0880DCF4(T0 *arg0) {
    if (--arg0->unk_04 == 0) {
        return arg0;
    } else {
        arg0 = NULL;
        return arg0;
    }
}
