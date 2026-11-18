#include "common.h"

extern "C" {

class Del_088B5010 {
public:
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_088B5A98(s32, s32);
void func_08889A2C(s32, s32);
void func_0880416C(void *);

struct E_088B5010 {
    s32 unk_00;
    Del_088B5010 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            --*unk_0C;
            s32 *c = unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v0C(p, c, unk_00);
                func_088B5A98(p, unk_00);
            }
        }
    }
};

struct P_088B5010 {
    s32 unk_00;
    Del_088B5010 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->v0C(p, c, unk_00);
                func_08889A2C(p, unk_00);
            }
        }
    }
};

typedef struct {
    E_088B5010 *unk_00;
    s32 unk_04;
} V_088B5010;

typedef struct {
    u8 pad_00[0x24];
    V_088B5010 unk_24;
} S_088B5010;

typedef struct {
    u8 pad_00[0x48];
    P_088B5010 unk_48;
    S_088B5010 unk_58;
    u8 pad_84[0x3C];
    void *unk_C0;
} T_088B5010;

extern u8 D_08A45D20[];

T_088B5010 *func_088B5010(T_088B5010 *arg0, s16 arg1) {
    E_088B5010 *p;
    V_088B5010 *vp;
    s32 *sz;

    if (arg0 != NULL) {
        arg0->unk_C0 = D_08A45D20;
        if (&arg0->unk_58 != NULL) {
            p = arg0->unk_58.unk_24.unk_00;
            vp = &arg0->unk_58.unk_24;
            if ((u32)p != (u32)(p + arg0->unk_58.unk_24.unk_04)) {
                sz = &arg0->unk_58.unk_24.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != vp->unk_00 + *sz);
            }
            arg0->unk_58.unk_24.unk_04 = 0;
        }
        if (&arg0->unk_48 != NULL) {
            if (&arg0->unk_48 != NULL) {
                arg0->unk_48.release();
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
