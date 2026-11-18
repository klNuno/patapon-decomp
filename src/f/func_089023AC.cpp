#include "common.h"

extern "C" {

struct A_089023AC {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

class V_089023AC {
public:
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual f32 *v28();
};

struct C_089023AC {
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
    A_089023AC *unk_04;
    V_089023AC *unk_08;
    C_089023AC unk_0C;
} H_089023AC;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S_089023AC;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_088C6464(u8 *);
void func_088F8B8C(H_089023AC *, s32, s32);
void func_088F5328(void *, s32);

void func_089023AC(S_089023AC *arg0, void *arg1) {
    H_089023AC h;
    s32 *a;
    f32 *b;
    f32 *c;
    f32 *r;
    C_089023AC *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    func_088F8B8C(&h, func_088C6464(arg0->unk_10 + 0x506F0), *a);
    r = h.unk_08->v28();
    *b = r[0];
    *c = r[1];
    func_08852F00(arg1, 0);
    if (h.unk_08 != NULL) {
        p = &h.unk_0C;
        if (p->release() == 0) {
            h.unk_04->v1(h.unk_08, *(s32 **)p, h.unk_00);
            func_088F5328(h.unk_08, h.unk_00);
        }
    }
}

}
