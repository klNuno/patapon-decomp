#include "common.h"

extern "C" {

class Del_0898D2E4 {
public:
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

void func_0880416C(void *);
void func_089458C8(void *, s32);
void func_08945EC4(void *, s32);
void func_0898D158(void *, s32);
void func_0898D1C8(void *);
void func_0898D46C(void *);
void func_0898DABC(s32, s32);
extern u8 D_08A48490[];

struct E_0898D2E4 {
    s32 unk_00;
    Del_0898D2E4 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            --*unk_0C;
            s32 *c = unk_0C;
            if ((c != NULL ? *c : 0) == 0) {
                unk_04->v0C(p, c, unk_00);
                func_0898DABC(p, unk_00);
            }
        }
    }
};

typedef struct {
    E_0898D2E4 *unk_00;
    s32 unk_04;
} V_0898D2E4;

typedef struct {
    u8 pad_00[0x110];
    V_0898D2E4 unk_110;
} S_0898D2E4;

typedef struct {
    u8 pad_00[0x24];
    void *unk_24;
} M_0898D2E4;

typedef struct {
    u8 pad_00[4];
    u8 unk_04[8];
    u8 unk_0C[0xC];
    S_0898D2E4 unk_18;
    M_0898D2E4 unk_130;
    M_0898D2E4 unk_158;
} T_0898D2E4;

T_0898D2E4 *func_0898D2E4(T_0898D2E4 *arg0, s16 arg1) {
    E_0898D2E4 *p;
    V_0898D2E4 *vp;
    s32 *sz;

    if (arg0 != NULL) {
        func_0898D46C(arg0);
        if (&arg0->unk_158 != NULL) {
            arg0->unk_158.unk_24 = D_08A48490;
            func_0898D1C8(&arg0->unk_158);
            func_0898D158(&arg0->unk_158, -1);
        }
        if (&arg0->unk_130 != NULL) {
            arg0->unk_130.unk_24 = D_08A48490;
            func_0898D1C8(&arg0->unk_130);
            func_0898D158(&arg0->unk_130, -1);
        }
        if (&arg0->unk_18 != NULL) {
            p = arg0->unk_18.unk_110.unk_00;
            vp = &arg0->unk_18.unk_110;
            if ((u32)p != (u32)(p + arg0->unk_18.unk_110.unk_04)) {
                sz = &arg0->unk_18.unk_110.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != vp->unk_00 + *sz);
            }
            arg0->unk_18.unk_110.unk_04 = 0;
        }
        func_08945EC4(arg0->unk_0C, -1);
        func_089458C8(arg0->unk_04, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
