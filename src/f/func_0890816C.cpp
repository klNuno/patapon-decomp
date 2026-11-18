#include "common.h"

extern "C" {

struct V0_0890816C {
    virtual void v08();
    virtual void v0C(s32, s32 *, s32);
};

struct RC_0890816C {
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
    V0_0890816C *unk_04;
    s32 unk_08;
    RC_0890816C unk_0C;
} H_0890816C;

typedef struct {
    u8 pad_00[0x10];
    void *unk_10;
} A_0890816C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_08852BA8(void *);
void func_08908108(H_0890816C *, void *);
void func_0897F92C(s32, s32, s32, s32, s32, s32, s32 *);
void func_088DF528(s32, s32);

void func_0890816C(A_0890816C *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 x;
    s32 y;
    s32 z;
    s32 w;
    H_0890816C h;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 0, 4);
    d = func_0885356C(arg1, 3, 0, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = func_0885356C(arg1, 5, 0, 4);
    x = *a;
    y = func_08852BA8(arg1);
    y += *c;
    z = func_08852BA8(arg1);
    z += *d;
    w = *f;
    func_08908108(&h, arg0->unk_10);
    func_0897F92C(h.unk_08, x, *b, y, z, w, e);
    if (h.unk_08 != 0) {
        RC_0890816C *c = &h.unk_0C;
        if (c->release() == 0) {
            h.unk_04->v0C(h.unk_08, *(s32 **)c, h.unk_00);
            func_088DF528(h.unk_08, h.unk_00);
        }
    }
    func_08852F00(arg1, 0);
}

}
