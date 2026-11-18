#include "common.h"

extern "C" {

struct A_0899AEE0 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_0899AEE0 {
    s32 *unk_00;
    s32 get() { return unk_00 != NULL ? *unk_00 : 0; }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct SP_0899AEE0 {
    void *unk_00;
    C_0899AEE0 unk_04;
};

typedef struct {
    s32 unk_00;
    A_0899AEE0 *unk_04;
    SP_0899AEE0 unk_08;
} H_0899AEE0;

typedef struct {
    u8 pad_00[0x64];
    H_0899AEE0 *unk_64;
    u32 unk_68;
} V_0899AEE0;

void func_0899B34C(void *, s32);

void func_0899AEE0(V_0899AEE0 *arg0, H_0899AEE0 *arg1, H_0899AEE0 *arg2) {
    H_0899AEE0 *p;
    H_0899AEE0 *d;
    SP_0899AEE0 *s;
    C_0899AEE0 *c;

    p = arg0->unk_64;
    H_0899AEE0 *&data = arg0->unk_64;
    if ((u32)p != (u32)(p + arg0->unk_68)) {
        u32 &size = arg0->unk_68;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    s = &p->unk_08;
                    if (p->unk_08.unk_00 != NULL) {
                        c = &p->unk_08.unk_04;
                        if (c->release() == 0) {
                            p->unk_04->v1(s->unk_00, c->unk_00, p->unk_00);
                            func_0899B34C(s->unk_00, p->unk_00);
                        }
                    }
                }
            }
            p++;
        } while (p != data + size);
    }
    arg0->unk_68 = 0;
    d = arg0->unk_64;
    for (; arg1 != arg2; arg1++, d++, arg0->unk_68++) {
        if (d != NULL) {
            d->unk_00 = arg1->unk_00;
            d->unk_04 = arg1->unk_04;
            d->unk_08.unk_00 = arg1->unk_08.unk_00;
            d->unk_08.unk_04.unk_00 = arg1->unk_08.unk_04.unk_00;
            if (d->unk_08.unk_00 != NULL) {
                ++*d->unk_08.unk_04.unk_00;
            }
        }
    }
}

}
