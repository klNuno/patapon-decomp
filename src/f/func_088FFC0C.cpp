#include "common.h"

extern "C" {

struct A_088FFC0C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct B_088FFC0C {
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
};

struct C_088FFC0C {
    s32 *unk_00;
    s32 get() {
        if (unk_00 != NULL) {
            return *unk_00;
        }
        return 0;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

typedef struct {
    s32 unk_00;
    A_088FFC0C *unk_04;
    u8 *unk_08;
    C_088FFC0C unk_0C;
} H_088FFC0C;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FFC0C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
void func_088E1204(void *, s32);
s32 func_088E4ED4(u8 *);
void func_088F31AC(H_088FFC0C *, u8 *);
void func_088F5328(void *, s32);
void func_088F537C(H_088FFC0C *, H_088FFC0C *);

void func_088FFC0C(S_088FFC0C *arg0, void *arg1) {
    H_088FFC0C h;
    s32 *v;
    C_088FFC0C *c;

    v = func_0885356C(arg1, 0, 1, 4);
    *v = -1;
    func_088F31AC(&h, arg0->unk_10 + 0x50560);
    if (h.unk_08 != NULL && ((B_088FFC0C *)h.unk_08)->v5() == 1) {
        H_088FFC0C h2;

        func_088F537C(&h2, &h);
        *v = func_088E4ED4(h2.unk_08);
        if (h2.unk_08 != NULL) {
            c = &h2.unk_0C;
            if (c->release() == 0) {
                h2.unk_04->v1(h2.unk_08, *(s32 **)c, h2.unk_00);
                func_088F5328(h2.unk_08, h2.unk_00);
            }
        }
    }
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)c, h.unk_00);
            func_088E1204(h.unk_08, h.unk_00);
        }
    }
}

}
