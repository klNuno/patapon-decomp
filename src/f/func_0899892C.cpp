#include "common.h"

extern "C" {

class Del_0899892C {
public:
    virtual void vf_08();
    virtual void vf_0C(s32, s32 *, s32);
};

void func_089994B8(s32, s32);

inline void *operator new(unsigned int, void *p) { return p; }

class Ptr_0899892C {
public:
    s32 unk_00;
    Del_0899892C *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_0899892C(const Ptr_0899892C &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
    s32 count() { return unk_0C != NULL ? *unk_0C : 0; }
    void release() {
        s32 &p = unk_08;
        if (p != 0) {
            *unk_0C -= 1;
            if (count() == 0) {
                unk_04->vf_0C(p, unk_0C, unk_00);
                func_089994B8(p, unk_00);
            }
        }
    }
};

typedef struct {
    u8 pad_00[0x34];
    Ptr_0899892C *unk_34;
    s32 unk_38;
} T_0899892C;

void func_0899892C(T_0899892C *arg0, Ptr_0899892C *arg1, Ptr_0899892C *arg2) {
    Ptr_0899892C *p;
    Ptr_0899892C **d;
    s32 *n;
    Ptr_0899892C *q;

    p = arg0->unk_34;
    d = &arg0->unk_34;
    if ((u32)p != (u32)(p + arg0->unk_38)) {
        n = &arg0->unk_38;
        do {
            if (p != NULL) {
                if (p != NULL) {
                    p->release();
                }
            }
            p++;
        } while (p != *d + *n);
    }
    arg0->unk_38 = 0;
    q = arg0->unk_34;
    while (arg1 != arg2) {
        new (q) Ptr_0899892C(*arg1);
        arg1++;
        q++;
        arg0->unk_38++;
    }
}

}
