#include "common.h"

extern "C" {

class Del {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_0886A45C(s32, s32);
void func_08865F78(void *, s32);
void func_08912C38(void *, s32);
void func_0880416C(void *);

extern u8 D_08A47EE8[];

class Ptr {
public:
    s32 unk_00;
    Del *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            s32 *&c = unk_0C;
            *c -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, c, unk_00);
                func_0886A45C(p, unk_00);
            }
        }
    }
};

typedef struct M {
    u8 pad_00[0x80];
    void *unk_80;
} M;

typedef struct S {
    u8 pad_00[0x10A4];
    Ptr unk_10A4;
    u8 pad_10B4[0xC];
    M unk_10C0;
} S;

S *func_08952D3C(S *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (&arg0->unk_10C0 != NULL) {
            arg0->unk_10C0.unk_80 = D_08A47EE8;
            func_08865F78(&arg0->unk_10C0, 0);
        }
        if (&arg0->unk_10A4 != NULL) {
            if (&arg0->unk_10A4 != NULL) {
                arg0->unk_10A4.release();
            }
        }
        func_08912C38(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
