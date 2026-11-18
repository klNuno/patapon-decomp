#include "common.h"

extern "C" {

struct A_08903834 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_08903834 {
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
    A_08903834 *unk_04;
    u8 *unk_08;
    C_08903834 unk_0C;
} H_08903834;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_08903834;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F8B8C(H_08903834 *, s32, s32);
void *func_088E5574(u8 *);
f32 func_0890AC88(void *);
void func_088F5328(void *, s32);

void func_08903834(S_08903834 *arg0, void *arg1) {
    H_08903834 h;
    s32 *v;
    s32 *w;
    C_08903834 *c;

    v = func_0885356C(arg1, 0, 1, 4);
    w = func_0885356C(arg1, 1, 1, 4);
    *w = 0;
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *v);
    if (h.unk_08 != NULL) {
        *w = func_0890AC88(func_088E5574(h.unk_08));
    }
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)c, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
