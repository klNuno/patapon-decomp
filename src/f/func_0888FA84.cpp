#include "common.h"

extern "C" {

typedef struct A_088901E4 A_088901E4;

typedef struct {
    u8 pad_00[0xD80];
    f32 unk_D80;
} U;

typedef struct {
    u8 pad_00[0x92E0];
    s32 unk_92E0;
} W;

class V {
    u8 pad_00[0x24];

public:
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual f32 *vfunc_18();
};

typedef struct {
    u8 pad_00[0x3A0];
    W *unk_3A0;
    u8 pad_3A4[0x1520];
    A_088901E4 *unk_18C4;
    V *unk_18C8;
    u8 pad_18CC[4];
    f32 unk_18D0;
    f32 *unk_18D4;
} T;

s32 func_0888F7B4(A_088901E4 *, s32);

void func_0888FA84(T *arg0) {
    f32 *a;
    f32 *b;
    A_088901E4 *p;
    V *q;
    f32 x;
    f32 y;
    f32 sign;

    arg0->unk_18D4 = NULL;
    p = arg0->unk_18C4;
    a = NULL;
    b = NULL;
    if (p != NULL && func_0888F7B4(p, 1) != 0) {
        a = &((U *)func_0888F7B4(arg0->unk_18C4, 1))->unk_D80;
    }
    q = arg0->unk_18C8;
    if (q != NULL) {
        b = q->vfunc_18();
    }
    if (a != NULL && b != NULL) {
        if (arg0->unk_3A0->unk_92E0 == 1) {
            sign = -1.0f;
        } else {
            sign = 1.0f;
        }
        if (sign > 0.0f) {
            y = *b;
            x = *a;
            if (x < y) {
                arg0->unk_18D0 = x;
                arg0->unk_18D4 = &arg0->unk_18D0;
                return;
            }
            arg0->unk_18D0 = y;
            arg0->unk_18D4 = &arg0->unk_18D0;
            return;
        }
        y = *b;
        x = *a;
        if (x > y) {
            arg0->unk_18D0 = x;
            arg0->unk_18D4 = &arg0->unk_18D0;
            return;
        }
        arg0->unk_18D0 = y;
        arg0->unk_18D4 = &arg0->unk_18D0;
        return;
    }
    if (a != NULL) {
        arg0->unk_18D0 = *a;
        arg0->unk_18D4 = &arg0->unk_18D0;
        return;
    }
    if (b != NULL) {
        arg0->unk_18D0 = *b;
        arg0->unk_18D4 = &arg0->unk_18D0;
    } else {
        arg0->unk_18D4 = NULL;
    }
}

}
