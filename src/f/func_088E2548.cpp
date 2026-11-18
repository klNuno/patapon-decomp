#include "common.h"
extern "C" {
class Del_088E2548 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};
void func_088E478C(s32, s32);
void func_088E47E0(s32, s32);
class PtrA_088E2548 {
public:
    s32 unk_00;
    Del_088E2548 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_088E478C(p, unk_00);
            }
        }
    }
};
class PtrB_088E2548 {
public:
    s32 unk_00;
    Del_088E2548 *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_088E47E0(p, unk_00);
            }
        }
    }
};
typedef struct {
    PtrA_088E2548 *unk_00;
    s32 unk_04;
} VA_088E2548;
typedef struct {
    PtrB_088E2548 *unk_00;
    s32 unk_04;
} VB_088E2548;
typedef struct {
    u8 pad_00[0x210];
    VB_088E2548 unk_210;
} B_088E2548;
typedef struct {
    u8 pad_00[0x204];
    VA_088E2548 unk_204;
} A_088E2548;
typedef struct {
    u8 pad_00[0x8];
    B_088E2548 unk_08;
    u8 unk_220[0x4];
    A_088E2548 unk_224;
} O_088E2548;
void func_088E3120(O_088E2548 *);
void func_088E5C34(void *, s32);
void func_0880416C(void *);
O_088E2548 *func_088E2548(O_088E2548 *arg0, s16 arg1) {
    PtrA_088E2548 *p;
    PtrA_088E2548 **d;
    s32 *n;
    PtrB_088E2548 *q;
    PtrB_088E2548 **e;
    s32 *m;

    if (arg0 != NULL) {
        func_088E3120(arg0);
        if (&arg0->unk_224 != NULL) {
            p = arg0->unk_224.unk_204.unk_00;
            d = &arg0->unk_224.unk_204.unk_00;
            if ((u32)p != (u32)(p + arg0->unk_224.unk_204.unk_04)) {
                n = &arg0->unk_224.unk_204.unk_04;
                do {
                    if (p != NULL) {
                        if (p != NULL) {
                            p->release();
                        }
                    }
                    p++;
                } while (p != *d + *n);
            }
            arg0->unk_224.unk_204.unk_04 = 0;
        }
        func_088E5C34(arg0->unk_220, -1);
        if (&arg0->unk_08 != NULL) {
            q = arg0->unk_08.unk_210.unk_00;
            e = &arg0->unk_08.unk_210.unk_00;
            if ((u32)q != (u32)(q + arg0->unk_08.unk_210.unk_04)) {
                m = &arg0->unk_08.unk_210.unk_04;
                do {
                    if (q != NULL) {
                        if (q != NULL) {
                            q->release();
                        }
                    }
                    q++;
                } while (q != *e + *m);
            }
            arg0->unk_08.unk_210.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
}
