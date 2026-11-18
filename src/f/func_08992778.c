#include "common.h"

typedef struct {
    u8 pad_00[0x44];
    s32 unk_44;
} U;

typedef struct V {
    f32 unk_00;
    u8 pad_04[8];
    U *unk_0C;
    void (*unk_10)(struct V *);
    u8 pad_14[0x58];
} V;

typedef struct {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    V unk_08;
} W;

s32 func_08992D48(W *);

void func_08992778(W *arg0, u32 arg1) {
    s32 i;
    W *p;
    s32 temp;

    i = 0;
    p = arg0;
    do {
        if (p->unk_08.unk_0C != NULL && p->unk_08.unk_00 > 0.0f) {
            p->unk_08.unk_10(&p->unk_08);
            if ((p->unk_08.unk_00 -= (f32)arg1 / 4800.0f) > 0.0f && p->unk_08.unk_0C->unk_44 != 0) {
                p->unk_08.unk_00 = 0.001f;
            }
        }
        i++;
        p++;
    } while (i < 4);
    temp = func_08992D48(arg0);
    arg0->unk_00 = 0;
    if (arg0->unk_04 != temp) {
        arg0->unk_00 = 1;
        arg0->unk_04 = temp;
    }
}
