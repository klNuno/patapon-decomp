#include "common.h"

extern "C" {

class Del_088E3120 {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_088E478C(s32, s32);
void func_088E47E0(s32, s32);

class PtrA_088E3120 {
public:
    s32 unk_00;
    Del_088E3120 *unk_04;
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

class PtrB_088E3120 {
public:
    s32 unk_00;
    Del_088E3120 *unk_04;
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
    PtrA_088E3120 *unk_00;
    s32 unk_04;
} VA_088E3120;

typedef struct {
    PtrB_088E3120 *unk_00;
    s32 unk_04;
} VB_088E3120;

typedef struct {
    u8 pad_00[0x218];
    VB_088E3120 unk_218;
    u8 pad_220[0x428 - 0x220];
    VA_088E3120 unk_428;
    s32 unk_430;
    s32 unk_434;
    s32 unk_438;
    s32 unk_43C;
    u8 pad_440[4];
    s32 unk_444;
} Obj_088E3120;

void func_088E3120(Obj_088E3120 *arg0) {
    PtrA_088E3120 *p;
    PtrA_088E3120 **d;
    s32 *n;
    PtrB_088E3120 *q;
    PtrB_088E3120 **e;
    s32 *m;

    p = arg0->unk_428.unk_00;
    d = &arg0->unk_428.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_428.unk_04)) {
        n = &arg0->unk_428.unk_04;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->release();
                }
            }
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_428.unk_04 = 0;
    q = arg0->unk_218.unk_00;
    e = &arg0->unk_218.unk_00;
    if ((u32)q != (u32)(q + arg0->unk_218.unk_04)) {
        m = &arg0->unk_218.unk_04;
        do {
            if (q != NULL) {
                if (q != NULL) {
                    q->release();
                }
            }
            q++;
        } while (q != *e + *m);
    }
    arg0->unk_218.unk_04 = 0;
    arg0->unk_430 = 0;
    arg0->unk_434 = 0;
    arg0->unk_438 = 0;
    arg0->unk_43C = 0;
    arg0->unk_444 = 0;
}

}
