#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x60];
} E60_089A8408;

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} V4_089A8408;

typedef struct {
    E60_089A8408 *unk_00;
    s32 unk_04;
} V60_089A8408;

typedef struct {
    u8 pad_00[0x64];
    V60_089A8408 unk_64;
} I_089A8408;

typedef struct {
    void *unk_00;
    I_089A8408 unk_04;
} D0_089A8408;

typedef struct {
    u8 pad_00[0x24];
    V4_089A8408 unk_24;
} M140_089A8408;

class B_089A8408 {
public:
    virtual void v08();
    virtual void v0C();
};

struct A_089A8408 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct R_089A8408 {
    s32 *unk_00;
    s32 get() {
        s32 v;
        if (unk_00 != NULL) {
            v = *unk_00;
        } else {
            v = 0;
        }
        return v;
    }
    s32 release() { --*unk_00; return get(); }
};

typedef struct {
    s32 unk_00;
    A_089A8408 *unk_04;
    s32 unk_08;
    R_089A8408 unk_0C;
} H_089A8408;

typedef struct {
    u8 pad_00[0x28];
    void *unk_28;
    u8 pad_2C[4];
    H_089A8408 unk_30;
    u8 unk_40[0x90];
    D0_089A8408 unk_D0;
    M140_089A8408 unk_140;
} Obj_089A8408;

extern u8 D_08A486DC[];
extern u8 D_08A450E8[];
extern u8 D_08A44C14[];
void func_089A88AC(void);
void func_08865F78(void *, s32);
void func_0886A45C(s32, s32);
void func_088CE530(void *, s32);
void func_0880416C(void *);

Obj_089A8408 *func_089A8408(Obj_089A8408 *arg0, s16 arg1) {
    s32 *p;
    V4_089A8408 *v;
    E60_089A8408 *q;
    V60_089A8408 *w;

    if (arg0 != NULL) {
        arg0->unk_28 = D_08A486DC;
        func_089A88AC();
        if (&arg0->unk_140 != NULL) {
            p = arg0->unk_140.unk_24.unk_00;
            v = &arg0->unk_140.unk_24;
            if ((u32)p != (u32)(p + arg0->unk_140.unk_24.unk_04)) {
                do {
                    p++;
                } while (p != v->unk_00 + arg0->unk_140.unk_24.unk_04);
            }
            arg0->unk_140.unk_24.unk_04 = 0;
        }
        if (&arg0->unk_D0 != NULL) {
            arg0->unk_D0.unk_00 = D_08A450E8;
            ((B_089A8408 *)&arg0->unk_D0)->v0C();
            if (&arg0->unk_D0.unk_04 != NULL) {
                q = arg0->unk_D0.unk_04.unk_64.unk_00;
                w = &arg0->unk_D0.unk_04.unk_64;
                if ((u32)q != (u32)(q + arg0->unk_D0.unk_04.unk_64.unk_04)) {
                    do {
                        q++;
                    } while (q != w->unk_00 + arg0->unk_D0.unk_04.unk_64.unk_04);
                }
                arg0->unk_D0.unk_04.unk_64.unk_04 = 0;
            }
            if (&arg0->unk_D0 != NULL) {
                arg0->unk_D0.unk_00 = D_08A44C14;
            }
        }
        func_08865F78(arg0->unk_40, -1);
        if (&arg0->unk_30 != NULL) {
            if (&arg0->unk_30 != NULL) {
                s32 *h = &arg0->unk_30.unk_08;
                if (*h != 0) {
                    R_089A8408 *r = &arg0->unk_30.unk_0C;
                    if (r->release() == 0) {
                        arg0->unk_30.unk_04->v0C(*h, *(s32 **)r, arg0->unk_30.unk_00);
                        func_0886A45C(*h, arg0->unk_30.unk_00);
                    }
                }
            }
        }
        func_088CE530(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
