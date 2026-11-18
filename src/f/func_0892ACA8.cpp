#include "common.h"

extern "C" {

struct A_0892ACA8 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct H_0892ACA8 {
    s32 unk_00;
    A_0892ACA8 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
};

typedef struct {
    s8 *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_0892ACA8;

s32 func_08991310(void *, s8 *);
void func_089913A0(H_0892ACA8 *, void *, s32);
void func_088E20F4(H_0892ACA8 *, H_0892ACA8 *);
void func_088F2FE4(H_0892ACA8 *, s32 *);
void func_0887432C(H_0892ACA8 *, s32);
void func_0886A45C(s32, s32);

S_0892ACA8 *func_0892ACA8(S_0892ACA8 *arg0, s8 *arg1, s32 arg2, void *arg3) {
    H_0892ACA8 h;
    H_0892ACA8 t;
    s32 idx;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    if (arg1[0x94] != 0) {
        idx = func_08991310(arg3, arg1 + 0x94);
        if (idx != -1) {
            func_089913A0(&h, arg3, idx);
            func_088E20F4(&t, &h);
            func_088F2FE4(&t, &arg0->unk_08);
            func_0887432C(&t, -1);
            if (h.unk_08 != 0) {
                *h.unk_0C -= 1;
                if (h.count() == 0) {
                    h.unk_04->v0C(h.unk_08, *(s32 **)&h.unk_0C, h.unk_00);
                    func_0886A45C(h.unk_08, h.unk_00);
                }
            }
        }
    }
    return arg0;
}

}
