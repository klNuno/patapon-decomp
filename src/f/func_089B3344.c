#include "common.h"

typedef struct Unk_089B3344_Vec {
    s32 *unk_00;
    s32 unk_04;
} Unk_089B3344_Vec;

typedef struct Unk_089B3344 {
    u8 pad_00[0x48];
    Unk_089B3344_Vec unk_48;
    u8 pad_50[0x8];
    void *unk_58;
} Unk_089B3344;

void func_0880416C(void *);
extern u8 D_08A48A34[];

Unk_089B3344 *func_089B3344(Unk_089B3344 *arg0, s16 arg1) {
    s32 *p;
    Unk_089B3344_Vec *v;

    if (arg0 != NULL) {
        arg0->unk_58 = D_08A48A34;
        if ((u8 *)arg0 + 4 != NULL) {
            v = &arg0->unk_48;
            p = arg0->unk_48.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_48.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_48.unk_04);
            }
            arg0->unk_48.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
