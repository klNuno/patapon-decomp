#include "common.h"

extern "C" {

struct A {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP {
    s32 unk_00;
    C unk_04;
};

struct H {
    s32 unk_00;
    A *unk_04;
    SP unk_08;
};

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    u8 unk_10[0x90];
    u8 unk_A0[0x8];
    s32 unk_A8;
    u8 pad_AC[4];
    s32 unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    s32 unk_BC;
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
    s32 unk_CC;
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    s32 unk_DC;
    u8 unk_E0;
} S;

extern s32 D_08A065B4[];

void func_0898E444(S *);
void func_089912C8(H *, s32, s32);
void func_088E20F4(H *, H *);
void func_088F2FE4(H *, void *);
void func_0887432C(H *, s32);
void func_0886A45C(s32, s32);
void func_08865FE4(void *, s32);

void func_0898E4C0(S *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    H h;
    H t;
    SP *s;
    C *c;

    func_0898E444(arg0);
    arg0->unk_00 = arg1;
    arg0->unk_B4 = arg3;
    arg0->unk_B0 = 0;
    arg0->unk_BC = arg4;
    arg0->unk_C0 = arg5;
    arg0->unk_C4 = arg6;
    arg0->unk_CC = 0;
    arg0->unk_B0 = 0;
    arg0->unk_E0 = 1;
    arg0->unk_B8 = 0;
    func_089912C8(&h, arg2, D_08A065B4[arg4]);
    func_088E20F4(&t, &h);
    func_088F2FE4(&t, arg0->unk_A0);
    func_0887432C(&t, -1);
    s = &h.unk_08;
    if (h.unk_08.unk_00 != 0) {
        c = &h.unk_08.unk_04;
        if (c->release() == 0) {
            h.unk_04->v0C(s->unk_00, *(s32 **)c, h.unk_00);
            func_0886A45C(s->unk_00, h.unk_00);
        }
    }
    func_08865FE4(arg0->unk_10, arg0->unk_A8);
    arg0->unk_D0 = -1;
    arg0->unk_D4 = -1;
    arg0->unk_D8 = -1;
    arg0->unk_DC = -1;
    arg0->unk_C8 = arg7;
}

}
