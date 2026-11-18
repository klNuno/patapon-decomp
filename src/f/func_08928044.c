#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
} G;

typedef struct {
    u8 pad_00[0x44];
    G unk_44;
    u8 pad_54[0xC];
    s32 unk_60[1];
} E;

typedef struct {
    E **unk_00;
    s32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x204];
    V unk_204;
} W;

typedef struct {
    u8 pad_00[8];
    W unk_08;
} O;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
    f32 unk_1C;
    f32 unk_20;
    u8 pad_24[4];
    O *unk_28;
} T;

s32 func_089282AC(void *, s32 *);

void func_08928044(T *arg0) {
    E **p;
    E *e;
    W *w;
    E ***data;
    s32 *sz;

    p = arg0->unk_28->unk_08.unk_204.unk_00;
    w = &arg0->unk_28->unk_08;
    data = &w->unk_204.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_28->unk_08.unk_204.unk_04)) {
        sz = &w->unk_204.unk_04;
        do {
            e = *p;
            if (e != NULL) {
                G *g = &e->unk_44;
                if (g->unk_04 == arg0->unk_18) {
                    f32 v = g->unk_0C;
                    f32 a = arg0->unk_1C;
                    f32 b = arg0->unk_20;
                    s32 x = 0;
                    s32 y;
                    s32 z;
                    s32 r;
                    if (!(a < v)) {
                        goto unk_00;
                    }
                    if (!(v < b)) {
                        goto unk_00;
                    }
                    x = 1;
                unk_00:
                    y = ((u8)x | (u8)(b == v)) != 0;
                    if (a == b) {
                        y = 0;
                    }
                    z = (u8)(((a <= b) ? 1 : 0) ^ 1);
                    r = 1 ^ (z != 0);
                    if (r != 0) {
                        r = y != 0;
                    }
                    if (r == 0) {
                        r = z != 0;
                        if (r != 0) {
                            r = 1 ^ (y != 0);
                        }
                    }
                    if (r != 0) {
                        func_089282AC(arg0, e->unk_60);
                    }
                }
            }
            p++;
        } while (p != *data + *sz);
    }
}
