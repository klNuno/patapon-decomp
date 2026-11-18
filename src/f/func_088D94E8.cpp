#include "common.h"

extern "C" {

class B_088D94E8 {
public:
    virtual void v08(s32);
};

class E_088D94E8 : public B_088D94E8 {
public:
    u8 pad_04[0x4B0];
};

typedef struct {
    E_088D94E8 *unk_00;
    s32 unk_04;
} V_088D94E8;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} W_088D94E8;

typedef struct {
    u8 pad_00[0x4C4];
    V_088D94E8 unk_4C4;
} A_088D94E8;

typedef struct {
    u8 pad_00[0x14];
    W_088D94E8 unk_14;
} M_088D94E8;

typedef struct {
    A_088D94E8 unk_00;
    M_088D94E8 unk_4CC;
    void *unk_4E8;
} S_088D94E8;

extern u8 D_08A463C0[];
void func_0880416C(void *);

S_088D94E8 *func_088D94E8(S_088D94E8 *arg0, s16 arg1) {
    s32 *q;
    W_088D94E8 *w;
    E_088D94E8 *p;
    V_088D94E8 *v;
    s32 *n;

    if (arg0 != NULL) {
        arg0->unk_4E8 = D_08A463C0;
        if (&arg0->unk_4CC != NULL) {
            q = arg0->unk_4CC.unk_14.unk_00;
            w = &arg0->unk_4CC.unk_14;
            if ((u32)q != (u32)(q + arg0->unk_4CC.unk_14.unk_04)) {
                do {
                    q++;
                } while (q != w->unk_00 + arg0->unk_4CC.unk_14.unk_04);
            }
            arg0->unk_4CC.unk_14.unk_04 = 0;
        }
        if (&arg0->unk_00 != NULL) {
            p = arg0->unk_00.unk_4C4.unk_00;
            v = &arg0->unk_00.unk_4C4;
            if ((u32)p != (u32)(p + arg0->unk_00.unk_4C4.unk_04)) {
                n = &arg0->unk_00.unk_4C4.unk_04;
                do {
                    p->v08(-1);
                    p++;
                } while (p != v->unk_00 + *n);
            }
            arg0->unk_00.unk_4C4.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
