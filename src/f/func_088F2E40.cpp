#include "common.h"

extern "C" {

struct A_088F2E40 {
    virtual void v0();
    virtual void v1(s32, s32 *, s32);
};

struct R_088F2E40 {
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

struct H_088F2E40 {
    s32 unk_00;
    A_088F2E40 *unk_04;
    s32 unk_08;
    R_088F2E40 unk_0C;
};

typedef struct {
    u8 pad_00[0x8];
    H_088F2E40 unk_08;
    u8 pad_18[0x18];
    u8 unk_30[0x150 - 0x30];
    u8 unk_150[0x20];
} S_088F2E40;

void func_088F2F40(S_088F2E40 *);
void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_08865F78(void *, s32);
void func_0887432C(void *, s32);
void func_088E1204(s32, s32);
void func_0880416C(void *);

S_088F2E40 *func_088F2E40(S_088F2E40 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088F2F40(arg0);
        func_08804000(arg0->unk_150, func_0887432C, 0x10, 2);
        func_08804000(arg0->unk_30, func_08865F78, 0x90, 2);
        if (&arg0->unk_08 != NULL) {
            if (&arg0->unk_08 != NULL) {
                s32 *p = &arg0->unk_08.unk_08;
                if (*p != 0) {
                    R_088F2E40 *r = &arg0->unk_08.unk_0C;
                    if (r->release() == 0) {
                        arg0->unk_08.unk_04->v1(*p, *(s32 **)r, arg0->unk_08.unk_00);
                        func_088E1204(*p, arg0->unk_08.unk_00);
                    }
                }
            }
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
