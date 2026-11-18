#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
} M_089CA16C;

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} O_089CA16C;

void func_08855354(M_089CA16C *);
void func_08864E80(void *, M_089CA16C *);
O_089CA16C *func_08985828(s32, s32);
void func_0898ABB8(void *, f32, s32, s32);
extern f32 D_089F37C0[];

void func_089CA16C(s32 arg0) {
    M_089CA16C m;
    O_089CA16C *o;
    u32 i;

    o = func_08985828(arg0, 0xB);
    if ((u32)(o->unk_4C - 3) < 3U && o->unk_5C <= o->unk_54) {
        func_08855354(&m);
        m.unk_30 = D_089F37C0[0];
        m.unk_34 = D_089F37C0[1];
        func_08864E80(o, &m);
        func_0898ABB8(o, 0.0f, 2, 1);
    }
    for (i = 0; i < 8; i++) {
        o = func_08985828(arg0, i + 1);
        if (o->unk_4C == 3 && o->unk_5C <= o->unk_54) {
            func_0898ABB8(o, 0.0f, 4, 0);
        }
    }
}
