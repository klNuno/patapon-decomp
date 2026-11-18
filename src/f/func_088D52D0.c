#include "common.h"

typedef struct {
    u8 pad_00[0x710];
    u32 unk_710;
    u32 unk_714;
    s32 unk_718;
    u8 pad_71C[0x14];
    s32 unk_730;
} T;

void func_088D52D0(T *arg0, f32 arg1) {
    f32 f;
    f32 t;
    u32 n;

    if (arg1 < 0.01f) {
        arg0->unk_714 = 1;
        arg0->unk_710 = 1;
        arg0->unk_718 = 4;
        return;
    }
    f = arg0->unk_714 == 0 ? 0.0f : (f32)arg0->unk_710 / (f32)arg0->unk_714;
    t = 4800.0f * arg1;
    n = (u32)t;
    arg0->unk_714 = n;
    switch (arg0->unk_718) {
    case 2:
    case 3:
        arg0->unk_710 = (u32)((f32)arg0->unk_714 * f);
        break;
    case 5:
        if (arg0->unk_730 == 1) {
            arg0->unk_718 = 2;
            arg0->unk_710 = 0;
        } else {
            arg0->unk_718 = 2;
            arg0->unk_710 = (u32)((f32)arg0->unk_714 * (1.0f - f));
        }
        break;
    case 1:
        arg0->unk_718 = 2;
        arg0->unk_710 = 0;
        break;
    case 4:
        if (arg0->unk_730 == 0) {
            arg0->unk_714 = n;
            arg0->unk_710 = 0;
            arg0->unk_718 = 3;
        } else if (arg0->unk_730 == 1) {
            arg0->unk_718 = 2;
            arg0->unk_710 = 0;
        } else {
            arg0->unk_714 = 1;
            arg0->unk_710 = 1;
        }
        break;
    default:
        arg0->unk_718 = 2;
        arg0->unk_710 = 0;
        break;
    }
}
