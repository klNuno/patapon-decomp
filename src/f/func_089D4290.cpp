#include "common.h"

extern "C" {

struct T089D4290_A {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

void func_089853B4(s32, s32);
void func_0880416C(void *);

struct T089D4290_R {
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

struct T089D4290_H {
    s32 unk_00;
    T089D4290_A *unk_04;
    s32 unk_08;
    T089D4290_R unk_0C;
};

typedef struct {
    u8 pad_00[0x10];
    T089D4290_H unk_10;
    u8 pad_20[0x1C];
    void *unk_3C;
} T089D4290;

extern u8 D_08A48FE4[];

T089D4290 *func_089D4290(T089D4290 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->unk_3C = D_08A48FE4;
        if (&arg0->unk_10 != NULL) {
            if (&arg0->unk_10 != NULL) {
                s32 *p = &arg0->unk_10.unk_08;
                if (*p != 0) {
                    T089D4290_R *r = &arg0->unk_10.unk_0C;
                    if (r->release() == 0) {
                        arg0->unk_10.unk_04->vfunc_0C(*p, *(s32 **)r, arg0->unk_10.unk_00);
                        func_089853B4(*p, arg0->unk_10.unk_00);
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
