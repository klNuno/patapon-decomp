#include "common.h"

extern "C" {

struct A_088FFD7C {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct B_088FFD7C {
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual s32 v5();
};

struct D_088FFD7C {
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18(f32);
};

struct C_088FFD7C {
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
    A_088FFD7C *unk_04;
    u8 *unk_08;
    C_088FFD7C unk_0C;
} H_088FFD7C;

typedef struct {
    u8 pad_00[0x2DAC0];
    D_088FFD7C unk_2DAC0;
    u8 pad_2DAC4[0x50560 - 0x2DAC4];
    u8 unk_50560[4];
} G_088FFD7C;

typedef struct {
    u8 pad_00[0x10];
    G_088FFD7C *unk_10;
} S_088FFD7C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
void func_088E1204(void *, s32);
s32 func_088E5148(u8 *);
void func_088D43FC(D_088FFD7C *, s32, f32);
void func_088F31AC(H_088FFD7C *, u8 *);
void func_088F5328(void *, s32);
void func_088F537C(H_088FFD7C *, H_088FFD7C *);

void func_088FFD7C(S_088FFD7C *arg0, void *arg1) {
    H_088FFD7C h;
    C_088FFD7C *c;

    func_088F31AC(&h, arg0->unk_10->unk_50560);
    if (*func_0885356C(arg1, 0, 1, 4) == 1) {
        if (h.unk_08 != NULL && ((B_088FFD7C *)h.unk_08)->v5() == 1) {
            H_088FFD7C h2;

            func_088F537C(&h2, &h);
            D_088FFD7C *d = &arg0->unk_10->unk_2DAC0;
            func_088D43FC(d, func_088E5148(h2.unk_08), 0.0f);
            if (h2.unk_08 != NULL) {
                c = &h2.unk_0C;
                if (c->release() == 0) {
                    h2.unk_04->v1(h2.unk_08, *(s32 **)c, h2.unk_00);
                    func_088F5328(h2.unk_08, h2.unk_00);
                }
            }
        } else {
            arg0->unk_10->unk_2DAC0.v18(0.0f);
        }
    } else {
        arg0->unk_10->unk_2DAC0.v18(0.0f);
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
