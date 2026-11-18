#include "common.h"

typedef struct {
    u8 pad_00[0x26710];
    u8 unk_26710[4];
} L_088F9608;

typedef struct {
    u8 pad_00[0x1DE0];
    L_088F9608 unk_1DE0;
} W_088F9608;

typedef struct {
    s32 unk_00;
} It_088F9608;

typedef struct {
    u8 pad_00[0x34];
    u8 unk_34[0xD8 - 0x34];
    W_088F9608 *unk_D8;
    u8 pad_DC[0x2AC - 0xDC];
    s32 unk_2AC;
    s32 unk_2B0;
    u8 pad_2B4[0x2CC - 0x2B4];
    s32 unk_2CC;
    u8 unk_2D0[0x3D0 - 0x2D0];
    s32 unk_3D0;
    u8 pad_3D4[0x3F0 - 0x3D4];
    u8 unk_3F0[0x5E8 - 0x3F0];
    s32 unk_5E8;
    s32 unk_5EC;
} S_088F9608;

void func_088D8DE0(It_088F9608 *, void *);
void func_088D8DD8(It_088F9608 *, void *);
s32 func_088DDB30(It_088F9608 *, It_088F9608 *);
s32 *func_088DDC80(It_088F9608 *);
void func_088DDBD8(It_088F9608 *);
void func_088E63DC(s32);
void func_088DDBEC(L_088F9608 *, s32, s32);
void func_088DDB48(It_088F9608 *, void *, s32);
void func_0890A130(void *);
void func_08923C88(void *);
void func_089302A4(void *);

void func_088F9608(S_088F9608 *arg0) {
    struct { s32 unk_00; } hh;
    It_088F9608 it;
    It_088F9608 end;
    It_088F9608 r;
    L_088F9608 *l;
    s32 v;

    hh.unk_00 = arg0->unk_3D0;
    if (hh.unk_00 != 0) {
        l = &arg0->unk_D8->unk_1DE0;
        func_088D8DE0(&it, l->unk_26710);
        func_088D8DD8(&end, l->unk_26710);
        while (func_088DDB30(&it, &end)) {
            v = *func_088DDC80(&it);
            if (v == hh.unk_00) {
                func_088E63DC(*func_088DDC80(&it));
                func_088DDBEC(l, *func_088DDC80(&it), 0);
                func_088DDB48(&r, l->unk_26710, it.unk_00);
                break;
            }
            func_088DDBD8(&it);
        }
        arg0->unk_3D0 = 0;
    }
    func_0890A130(arg0->unk_3F0);
    func_08923C88(arg0->unk_34);
    func_089302A4(arg0->unk_2D0);
    arg0->unk_2CC = 3;
    arg0->unk_2AC = -1;
    arg0->unk_2B0 = -1;
    arg0->unk_5E8 = 0;
    arg0->unk_5EC = 0;
}
