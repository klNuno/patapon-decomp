#include "common.h"

typedef struct N_08943C70 {
    u32 unk_00;
    struct N_08943C70 *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} N_08943C70;

typedef union {
    N_08943C70 *unk_00;
    f32 unk_00_f32;
} Unk;

s32 func_08943D9C(N_08943C70 *);

void func_08943F3C(Unk *arg0, N_08943C70 *arg1, N_08943C70 *arg2)
{
    volatile struct {
        Unk unk_00;
        u8 pad_04[4];
    } temp;

    temp.unk_00.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2 && func_08943D9C(arg2) != 0) {
        arg1->unk_20--;
    }
    arg0->unk_00_f32 = temp.unk_00.unk_00_f32;
}
