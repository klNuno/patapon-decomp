#include "common.h"

extern "C" {

struct V0_08907F84 {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct RC_08907F84 {
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
    V0_08907F84 *unk_04;
    s32 unk_08;
    RC_08907F84 unk_0C;
} H_08907F84;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} A_08907F84;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_08852BA8(void *);
void func_08908108(H_08907F84 *, void *);
void func_0897F7E4(s32, s32, s32, s32, s32, s32);
void func_088DF528(s32, s32);

void func_08907F84(A_08907F84 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    H_08907F84 h;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    d = func_0885356C(arg1, 3, 0, 4);
    e = func_0885356C(arg1, 4, 0, 4);
    x = *a;
    y = func_08852BA8(arg1);
    y += *c;
    z = func_08852BA8(arg1);
    z += *d;
    w = *e;
    func_08908108(&h, arg0->unk_10);
    func_0897F7E4(h.unk_08, x, *b, y, z, w);
    if (h.unk_08 != 0) {
        RC_08907F84 *c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v0C(h.unk_08, *(s32 **)c, h.unk_00);
            func_088DF528(h.unk_08, h.unk_00);
        }
    }
    func_08852F00(arg1, 0);
}

}
