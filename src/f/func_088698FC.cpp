#include "common.h"

extern "C" {

struct A_088698FC {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088698FC {
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

struct SP_088698FC {
    void *unk_00;
    C_088698FC unk_04;
};

typedef struct {
    s32 unk_00;
    A_088698FC *unk_04;
    SP_088698FC unk_08;
} M_088698FC;

typedef struct {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    u8 unk_0C;
    void *unk_10;
} N_088698FC;

typedef struct {
    u8 pad_00[4];
    N_088698FC unk_04;
    u8 pad_18[4];
    M_088698FC unk_1C;
} B_088698FC;

extern u8 D_08A44A3C[];
extern s32 D_089F8DA8[];
extern s32 D_089F8EDC[];

void *func_0896CE18(void *, s32, s32, s32);
void func_0885F7EC(void *, s32);
void func_08869A88(B_088698FC *, N_088698FC *);
s32 func_08869AD8(u8 *, s32, s32, s32, s32, B_088698FC *, s32, s32, u8);

u8 func_088698FC(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, u8 arg8) {
    B_088698FC b;
    N_088698FC n;
    void *h;
    u8 r;
    SP_088698FC *s;
    C_088698FC *c;

    h = func_0896CE18(arg0 + 0xEA8D0, D_089F8DA8[0], 0, 1);
    n.unk_04 = func_0896CE18(h, D_089F8EDC[arg3], 0, 1);
    n.unk_10 = D_08A44A3C;
    n.unk_0C = 1;
    n.unk_00 = arg2;
    n.unk_08 = arg3;
    func_08869A88(&b, &n);
    n.unk_10 = D_08A44A3C;
    r = func_08869AD8(arg0, 0, arg1, arg4, arg5, &b, arg6, arg7, arg8);
    s = &b.unk_1C.unk_08;
    if (b.unk_1C.unk_08.unk_00 != NULL) {
        c = &b.unk_1C.unk_08.unk_04;
        if (c->release() == 0) {
            b.unk_1C.unk_04->v1(s->unk_00, *(s32 **)c, b.unk_1C.unk_00);
            func_0885F7EC(s->unk_00, b.unk_1C.unk_00);
        }
    }
    b.unk_04.unk_10 = D_08A44A3C;
    return r;
}

}
