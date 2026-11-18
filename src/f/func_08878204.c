#include "common.h"

typedef struct {
    u8 pad_00[0x18];
} T08878204_E1;

typedef struct {
    T08878204_E1 *unk_00;
    s32 unk_04;
} T08878204_V1;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} T08878204_V2;

typedef struct {
    u8 pad_00[0x10];
    f32 unk_10;
    u8 unk_14[0xB0];
    u8 unk_C4[0x580];
    u8 unk_644[0x21F8];
    u8 unk_283C;
    u8 pad_283D[3];
    s32 unk_2840;
    u8 pad_2844[0x854];
    u8 unk_3098;
    u8 pad_3099[0x607];
    T08878204_V1 unk_36A0;
    u8 pad_36A8[0x868];
    T08878204_V2 unk_3F10;
} T08878204;

void func_088A4138(f32, void *, s32);
void func_0897C3F4(f32, void *, s32);

void func_08878204(T08878204 *arg0) {
    T08878204_E1 *p;
    T08878204_V1 *v;
    s32 *q;
    T08878204_V2 *w;

    func_088A4138(0.0f, arg0->unk_C4, 0);
    func_0897C3F4(0.0f, arg0->unk_14, 0);
    arg0->unk_283C = 0;
    arg0->unk_2840 = 0x80;
    arg0->unk_10 = 1.0f;
    p = arg0->unk_36A0.unk_00;
    v = &arg0->unk_36A0;
    if ((u32)p != (u32)(p + arg0->unk_36A0.unk_04)) {
        do {
            p++;
        } while (p != v->unk_00 + arg0->unk_36A0.unk_04);
    }
    arg0->unk_36A0.unk_04 = 0;
    q = arg0->unk_3F10.unk_00;
    w = &arg0->unk_3F10;
    if ((u32)q != (u32)(q + arg0->unk_3F10.unk_04)) {
        do {
            q++;
        } while (q != w->unk_00 + arg0->unk_3F10.unk_04);
    }
    arg0->unk_3F10.unk_04 = 0;
    arg0->unk_3098 = 0;
}
