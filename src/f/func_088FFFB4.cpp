#include "common.h"

extern "C" {

struct A_088FFFB4 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_088FFFB4 {
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
    A_088FFFB4 *unk_04;
    u8 *unk_08;
    C_088FFFB4 unk_0C;
} H_088FFFB4;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_088FFFB4;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F8B8C(H_088FFFB4 *, s32, s32);
void func_088F93CC(H_088FFFB4 *, H_088FFFB4 *);
void func_088F31F0(u8 *, H_088FFFB4 *);
void func_088E1204(void *, s32);
void func_088F5328(void *, s32);

void func_088FFFB4(S_088FFFB4 *arg0, void *arg1) {
    H_088FFFB4 h;
    s32 *v;
    C_088FFFB4 *c;

    v = func_0885356C(arg1, 0, 1, 4);
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *v);
    if (h.unk_08 != NULL) {
        H_088FFFB4 h2;

        func_088F93CC(&h2, &h);
        func_088F31F0(arg0->unk_10 + 0x50560, &h2);
        if (h2.unk_08 != NULL) {
            c = &h2.unk_0C;
            if (c->release() == 0) {
                h2.unk_04->v1(h2.unk_08, *(s32 **)c, h2.unk_00);
                func_088E1204(h2.unk_08, h2.unk_00);
            }
        }
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
