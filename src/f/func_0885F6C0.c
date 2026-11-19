#include "common.h"

typedef struct Unk00 {
    struct Unk00 *unk_00;
    struct Unk00 *unk_04;
    u8 pad_08[4];
    struct Unk00 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Unk00;

static inline s32 func_0885F6C0_inline(Unk00 *arg0, Unk00 *arg1) {
    Unk00 *temp = arg0->unk_00;
    if (temp != arg0) {
        arg1->unk_00 = temp;
        arg0->unk_00->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg1->unk_00 = arg0;
    return 1;
}

s32 func_0885F6C0(Unk00 *arg0, Unk00 *arg1) {
    s32 temp;
    if (arg1 == NULL) {
        return 0;
    }
    if (arg0 != arg1) {
        temp = func_0885F6C0_inline(arg0, arg1);
        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            ++arg0->unk_20;
        }
    }
    return 1;
}
