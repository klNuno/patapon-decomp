#include "common.h"

extern "C" {

typedef struct A_088A5270 {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x78];
} A_088A5270;

struct V_088A5270 {
    A_088A5270 *unk_00;
    A_088A5270 *at(s32 i) { return &unk_00[i]; }
};

typedef struct B_088A5270 {
    u8 pad_00[0x9300];
    u8 unk_9300[4];
} B_088A5270;

typedef struct T_088A5270 {
    u8 pad_00[0x3A0];
    B_088A5270 *unk_3A0;
    u8 pad_3A4[0x528 - 0x3A4];
    V_088A5270 unk_528;
    u8 pad_52C[0x1AC0 - 0x52C];
    s32 unk_1AC0;
} T_088A5270;

void func_088A740C(T_088A5270 *, void *);
void func_088A86A0(A_088A5270 *, s32, s32);

s32 func_088A5270(T_088A5270 *arg0, s32 arg1, s32 arg2) {
    s32 i;
    V_088A5270 *v;

    i = 0;
    v = &arg0->unk_528;
    while (i < 3) {
        A_088A5270 *e = v->at(i);
        if (arg1 == -1) {
            func_088A86A0(e, e->unk_04, 1);
            i++;
        } else {
            func_088A86A0(e, arg1, arg2);
            i++;
        }
    }
    if (arg1 == 4) {
        u8 *p = arg0->unk_3A0->unk_9300;
        if (arg0->unk_1AC0 == 0) {
            func_088A740C(arg0, p);
        }
    } else {
        func_088A740C(arg0, NULL);
    }
    return 1;
}

}
