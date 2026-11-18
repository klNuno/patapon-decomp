#include "common.h"

extern "C" {

struct A_088FF244 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088FF244 {
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
    A_088FF244 *unk_04;
    u8 *unk_08;
    C_088FF244 unk_0C;
} H_088FF244;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FF244;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6454(u8 *);
void func_088E44CC(H_088FF244 *, s32, s32);
void func_088E4F98(u8 *, s32);
void func_088E478C(void *, s32);

void func_088FF244(S_088FF244 *arg0, void *arg1) {
    H_088FF244 h;
    s32 g;
    s32 *v;
    s32 *w;
    C_088FF244 *c;

    g = func_088C6454(arg0->unk_10 + 0x506F0);
    v = func_0885356C(arg1, 0, 1, 4);
    w = func_0885356C(arg1, 1, 1, 4);
    func_088E44CC(&h, g, *v);
    func_088E4F98(h.unk_08, *w);
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)c, h.unk_00);
            func_088E478C(h.unk_08, h.unk_00);
        }
    }
}

}
