#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    u32 unk_30;
    s32 unk_34;
} T08958E30;

T08958E30 *func_0885AD18(s32, s32);
T08958E30 *func_0885ACB8(s32, s32, s32, u32);

T08958E30 *func_08958E30(s32 arg0, s32 arg1) {
    T08958E30 *p;
    u32 i;
    u32 n;

    p = NULL;
    n = func_0885AD18(arg0, 1)->unk_30;
    for (i = 0; i < n; i++) {
        p = func_0885ACB8(arg0, 1, 2, i);
        if (p->unk_34 == arg1) {
            return p;
        }
    }
    return p;
}
