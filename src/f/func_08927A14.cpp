#include "common.h"

extern "C" {

struct E {
    u8 pad_00[0x44];
    s32 unk_44;
};

struct W {
    u8 pad_00[0x204];
    E **unk_204;
    s32 unk_208;
};

struct O {
    u8 pad_00[4];
    u8 *unk_04;
    u8 pad_08[0x20C];
    W unk_214;
};

class Q {
public:
    u8 pad_00[0x10];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void *v48(void *);
};

struct P_08928198 {
    u8 pad_00[0x40];
    Q *unk_40;
};

struct B {
    virtual void v08();
    virtual s32 v0C();
    virtual s32 v10();
};

struct R_08928198;

struct R {
    u8 pad_00[8];
    s32 unk_08;
};

struct S_08928198 {
    u8 pad_00[0x28];
    O *unk_28;
    u8 pad_2C[4];
    B unk_30;
    u8 pad_34[0xC];
    s32 unk_40;
    s32 unk_44;
    u8 pad_48[0x188];
    char unk_1D0[0x28];
    char unk_1F8[0x28];
    u8 unk_220;
    u8 pad_221[3];
    f32 unk_224;
};

R_08928198 *func_08927D18(S_08928198 *, P_08928198 *, void *);
s32 func_08927CF8(char *arg0);
s32 func_089272D0(char *arg0);
R *func_08927C9C(char *);
u8 func_08927C30(char *, R *);
void func_08927BE8(f32, B *);
s32 func_08924D20(s32 arg0, s32 arg1, s32 arg2);

s32 func_08927A14(S_08928198 *arg0, s32 arg1, P_08928198 *arg2) {
    E **p;
    W *w;
    E ***temp;
    s32 *temp2;
    E *q;
    R *s;
    s32 temp3;
    s32 temp4;
    f32 temp5;

    p = arg0->unk_28->unk_214.unk_204;
    w = &arg0->unk_28->unk_214;
    temp = &w->unk_204;
    if ((u32)p != (u32)(p + arg0->unk_28->unk_214.unk_208)) {
        temp2 = &w->unk_208;
        do {
            q = *p;
            if (q != NULL) {
                void *r = arg2->unk_40->v48(arg0->unk_28->unk_04 + (q->unk_44 << 7) + 0x40);
                if (func_08927D18(arg0, arg2, r) == NULL) {
                    temp3 = arg0->unk_30.v0C();
                    if (temp3 >= arg0->unk_30.v10()) {
                        temp4 = 0;
                    } else if (func_08927CF8(arg0->unk_1F8) != 0) {
                        temp4 = 0;
                    } else {
                        s = func_08927C9C(arg0->unk_1F8);
                        if (s == NULL) {
                            temp4 = 0;
                        } else if (func_08927C30(arg0->unk_1D0, s) == 0) {
                            temp4 = 0;
                        } else {
                            arg0->unk_44 = func_089272D0(arg0->unk_1D0);
                            temp5 = (f32)arg0->unk_44 / (f32)arg0->unk_40;
                            if (arg0->unk_220 != 0 && temp5 > arg0->unk_224) {
                                func_08927BE8(0.05f + arg0->unk_224, &arg0->unk_30);
                            }
                            temp4 = s->unk_08;
                        }
                    }
                    func_08924D20(temp4, (s32)arg2, (s32)r);
                }
            }
            p++;
        } while (p != *temp + *temp2);
    }
    return 1;
}

}
