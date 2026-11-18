#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

struct A_08967D54 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, s32 *, s32);
};

void func_08963018(s32, s32);
void func_08968C7C(void *);

struct H_08967D54 {
    s32 unk_00;
    A_08967D54 *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    H_08967D54() : unk_00(0), unk_04(NULL), unk_08(0), unk_0C(NULL) {}
    H_08967D54(const H_08967D54 &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
    s32 count() {
        if (unk_0C != NULL) {
            return *unk_0C;
        } else {
            return 0;
        }
    }
    void release() {
        if (unk_08 != 0) {
            s32 *c;
            s32 n;
            --*unk_0C;
            c = *(s32 *volatile *)&unk_0C;
            if (c != NULL) {
                n = *c;
            } else {
                n = 0;
            }
            if (n == 0) {
                unk_04->vfunc_0C(unk_08, c, unk_00);
                func_08963018(unk_08, unk_00);
            }
        }
    }
};

typedef struct S_08967D54 {
    u8 pad_00[4];
    u8 unk_04;
    u8 pad_05[0x438 - 5];
    H_08967D54 *unk_438;
    s32 unk_43C;

    void push(const H_08967D54 &o) {
        new (unk_438 + unk_43C) H_08967D54(o);
        unk_43C++;
    }
} S_08967D54;

void func_08967D54(S_08967D54 *arg0) {
    s32 i;

    for (i = 0; i < 0x40; i++) {
        H_08967D54 h;

        arg0->push(h);
        h.release();
    }
    func_08968C7C(arg0);
    arg0->unk_04 = 1;
}

}
