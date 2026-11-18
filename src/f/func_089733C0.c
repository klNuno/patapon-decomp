#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[8];
    s32 unk_2C;
} T;

typedef struct {
    u8 pad_00[0x54];
    f32 unk_54;
} A;

typedef struct {
    u8 pad_00[0xCF0];
    A unk_CF0;
} B;

s32 func_08973EB8(char *arg0, s32 arg1);

s32 func_089733C0(T *arg0) {
    f32 v = -1.0f;
    B *p;
    A *q;

    switch (arg0->unk_2C) {
    case 0x3F: v = 3.5f; break;
    case 0x40: v = 3.5f; break;
    case 0x41: v = v; break;
    case 0x42: v = 3.3f; break;
    case 0x43: v = 3.3f; break;
    case 0x44: v = 3.3f; break;
    }
    if (v >= 0.0f) {
        p = (B *)func_08973EB8((char *)arg0, arg0->unk_20);
        if (p != NULL) {
            q = &p->unk_CF0;
            if (q != NULL && v <= (f32)(s32)q->unk_54) {
                return 1;
            }
        }
    }
    return 0;
}
